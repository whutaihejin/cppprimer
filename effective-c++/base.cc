#include <iostream>

class A {
  public:
    int b;
    char c;
    virtual void print() {
      std::cout << "this is father function";
    }
};
