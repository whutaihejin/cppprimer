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
      std::cout << "copy contruct " << base.x_ << std::endl;
    }
    Base& operator=(const Base& base) {
      x_ = base.x_;
      std::cout << "assign contruct " << base.x_ << std::endl;
    }
    ~Base() {
      std::cout << "destroy base" << x_ << std::endl;
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
  allocator.construct(free_, element);
  free_++;
}

template <class T> void Vector<T>::reallocate() {
  std::ptrdiff_t size = free_ - head_;
  std::ptrdiff_t capacity = 2 * std::max(size, static_cast<std::ptrdiff_t>(1));
  T* new_head = allocator.allocate(capacity);
  std::uninitialized_copy(head_, free_, new_head);
  for (T* p = free_; p != head_; /*empty*/) {
    allocator.destroy(--p);
  }
  if (head_) { // deallocate cannot be called on a 0 pointer
    allocator.deallocate(head_, end_ - head_);
  }
  head_ = new_head;
  free_ = head_ + size;
  end_ = head_ + capacity;
}

template <class T> Vector<T>::~Vector() {
  for (T* p = free_; p != head_; /*empty*/) {
    allocator.destroy(--p);
  }
  if (head_) {
    allocator.deallocate(head_, end_ - head_);
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
