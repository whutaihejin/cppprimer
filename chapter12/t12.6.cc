#include <iostream>

class Circle {
  public:
    Circle(): r_(0) {}
    Circle(double r): r_(r) {}
    double Area() {
      std::cout << "Area=" << pi * r_ * r_ << std::endl;
    }
    double Length() {
      std::cout << "Length=" << 2 * pi * r_ << std::endl;
    }
  private:
    // static members
    static const double pi = 3.1415;
    // generic members
    double r_;
};

const double Circle::pi;

int main(int argc, char* argv[]) {
  Circle c(100);
  c.Area();
  c.Length();
  return 0;
}
