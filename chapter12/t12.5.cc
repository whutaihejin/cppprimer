#include <iostream>


class Base {
  public:
    Base(): x_(0) {}
    Base(int x): x_(x) {}
  private:
    int x_;
  friend class Cat;
};

class Cat {
  public:
    void printSum(Base& b1, Base& b2) {
      int sum = b1.x_ + b2.x_;
      std::cout << "sum=" << sum << std::endl;
    }
    void printMul(Base& b1, Base& b2) {
      int product = b1.x_ * b2.x_;
      std::cout << "product=" << product << std::endl;
    }
};

int main(int argc, char* argv[]) {
  Base b1(2);
  Base b2(6);
  Cat cat;
  cat.printSum(b1, b2);
  cat.printMul(b1, b2);
  return 0;
}
