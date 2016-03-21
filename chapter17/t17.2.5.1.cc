#include <iostream>
#include <stdint.h>
namespace taihejin {
  class Double {
    public:
      Double(): x_(0) {}
      Double(int32_t x): x_(x) {}
      void internal() {
        std::cout << "double=" << x_ * 2 << std::endl;
      }
    private:
      int32_t x_;
  };
  void display(Double& d) {
    d.internal();
  }
  void internal(int32_t x) {
    std::cout << "double=" << x * 2 << std::endl;
  }
}

int main(int argc, char* argv[]) {
  taihejin::Double d(3);
  display(d);
  taihejin::internal(5);
  return 0;
}
