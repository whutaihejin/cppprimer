#include <iostream>
#include <vector>

class Base {
  public:
    Base(): x_(0) {
      std::cout << "default constructor " << x_ << std::endl;
    }
    explicit Base(int x): x_(x) {
      std::cout << "parameter constructor " << x_ << std::endl;
    }
    Base(const Base& base): x_(base.x_) {
      std::cout << "copy constructor " << x_ << std::endl;
    }

  private:
    int x_;
};

Base fun(Base base) {
  // dummy
  return base;
}

int main(int argc, char* argv[]) {
  Base b(6);
  Base c = b;
  fun(b);
  Base d(5);
  std::cout << "--- separate ---" << std::endl;
  Base array[2];
  Base* parray[2];
  std::cout << "--- separate ---" << std::endl;
  Base list[3] = {b, d};
  std::cout << "--- separate ---" << std::endl;
  std::vector<Base> vec(2);
  return 0;
}
