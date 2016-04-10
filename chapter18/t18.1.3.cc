#include <iostream>
#include <memory>
#include <algorithm>
class Base {
  public:
    Base(): x_(22) {
      std::cout << "construct base " << x_ << std::endl;
    }
    Base(int x): x_(x) {
      std::cout << "construct base " << x_ << std::endl;
    }
    Base(const Base& base) {
      x_ = base.x_;
      std::cout << "copy contruct " << x_ << std::endl;
    }
    Base& operator=(const Base& base) {
      x_ = base.x_;
      std::cout << "assign contruct " << x_ << std::endl;
    }
    ~Base() {
      std::cout << "destroy base " << x_ << std::endl;
    }
  private:
    int x_;
};

template <class T> class Vector {
  public:
    Vector(): head_(0), free_(0), end_(0) {}
    ~Vector();
    void push_back(const T&);
  private:
    void reallocate();
    std::allocator<T> allocator;
    T* head_;
    T* free_;
    T* end_;
};

template <class T> void Vector<T>::push_back(const T& element) {
  if (free_ == end_) {
    reallocate();
  }
  new (free_) T(element);
  free_++;
}

template <class T> void Vector<T>::reallocate() {
  std::ptrdiff_t size = free_ - head_;
  std::ptrdiff_t capacity = 2 * std::max<std::ptrdiff_t>(size, 1);
  T* new_head = static_cast<T*>(operator new[](capacity * sizeof(T)));;
  std::uninitialized_copy(head_, free_, new_head);
  for (T* p = free_; p != head_; /*empty*/) {
    (--p)->~T();
  }
  if (head_) { // deallocate cannot be called on a 0 pointer
    operator delete[](head_);
  }
  head_ = new_head;
  free_ = head_ + size;
  end_ = head_ + capacity;
}

template <class T> Vector<T>::~Vector() {
  for (T* p = free_; p != head_; /*empty*/) {
    (--p)->~T();
  }
  if (head_) {
    operator delete[](head_);
  }
}

int main(int argc, char* argv[]) {
  Vector<Base> vec;
  Base a(1), b(3), c(5), d(7), e(9);
  vec.push_back(a);
  vec.push_back(b);
  vec.push_back(c);
  vec.push_back(d);
  vec.push_back(e);
  return 0;
}
