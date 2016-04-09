#include <iostream>
#include <memory>
#include <stdexcept>
#include <stdlib.h>
#include <stdint.h>
template <class T> class Cache {
  public:
    Cache(): next_(0) {}
    void* operator new (std::size_t);
    void operator delete (void*, std::size_t);
    virtual ~Cache() {}
  protected:
    T* next_;
  private:
    static void attach(T*);
    static std::allocator<T> allocator;
    static T* head;
    static const std::size_t chunk;
    static size_t counter;
};

template <class T> void* Cache<T>::operator new (std::size_t size) {
  if (sizeof(T) != size) {
    throw std::runtime_error("runtime error");
  }
  if (!head) { // empty cache
    T* array = allocator.allocate(chunk);
    for (int i = 0; i < chunk; ++i) {
      attach(&array[i]);
    }
  }
  T* p = head;
  head = head->Cache<T>::next_;
  return p;
}

template <class T> void Cache<T>::operator delete (void* element, std::size_t size) {
  if (element) {
    attach(static_cast<T*>(element));
  }
}

template <class T> void Cache<T>::attach(T* element) {
  element->Cache<T>::next_ = head;
  head = element;
  std::cout << "counter=" << ++counter << std::endl;
}

template <class T> std::allocator<T> Cache<T>::allocator;
template <class T> T* Cache<T>::head = 0;
template <class T> const std::size_t Cache<T>::chunk = 16;
template <class T> std::size_t Cache<T>::counter = 0;

class Base : public Cache<Base> {
  public:
    Base(): x_(0) {
      std::cout << "construct base " << x_ << std::endl;
    }
    Base(int x): x_(x) {
      std::cout << "construct base " << x_ << std::endl;
    }
    ~Base() {
      std::cout << "destroy base " << x_ << std::endl;
    }
  private:
    int x_;
};

int main(int argc, char* argv[]) {
  int times = 16;
  if (argc == 2) {
    times = atoi(argv[1]);
  }
  Base* array[times];
  for (int i = 0; i < times; ++i) {
    array[i] = new Base;
  }
  for (int i = 0; i < times; ++i) {
    delete array[i];
  }

 return 0; 
}
