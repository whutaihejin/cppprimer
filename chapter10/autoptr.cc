#include <iostream>
#include <memory>
class A {
  public:
    A() {
      std::cout << "construct A" << std::endl;
    }
    ~A() {
      std::cout << "destroy A" << std::endl;
    }
    void print() {
      std::cout << "just print it!" << std::endl;
    }
};

A* get() {
  return new A;
}
int main(int argc, char* argv[]) {
  std::auto_ptr<A> a(get());
  a->print();
  return 0;
}
