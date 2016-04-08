#include <iostream>
#include <stdint.h>
#include <typeinfo>
class Base {
  public:
    Base(): x_(0) {}
    virtual void print() {
      std::cout << "this is base's print" << std::endl;
    }
  private:
    int32_t x_;
};

class Derived : public Base {
  public:
    Derived(): index_(0) {}
    void print() {
      std::cout << "this is derived's print" << std::endl;
    }
    void fight() {
      std::cout << "this is derived's fight" << std::endl;
    }
  private:
    int32_t index_;
};

int main(int argc, char* argv[]) {
  Base* pb = new Derived;
  if (Derived* pd = dynamic_cast<Derived*>(pb)) {
    pd->fight();
  } else {
    pb->print();
  }
  Derived d;
  Base& base = d;
  try {
    Derived& dd = dynamic_cast<Derived&>(base);
    dd.fight();
  } catch (std::bad_cast) {
    std::cout << "convert fail" << std::endl;
  }
  return 0;
}
