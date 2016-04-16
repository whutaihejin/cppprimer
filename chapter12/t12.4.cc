#include <iostream>
class Base {
  public:
    Base(): x_(0) {
      std::cout << "default construct " << x_ << std::endl;
    }
    Base(int x): x_(x) {
      std::cout << "parameter construct " << x_ << std::endl;
    }
  private:
    int x_;
};

int main(int argc, char* argv[]) {
  Base b;
  Base bb(1);
  Base* p = new Base;
  Base* pp = new Base(2);
  return 0;
}
