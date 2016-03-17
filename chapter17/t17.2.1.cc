#include <iostream>

namespace cpp {
  void display(const std::string& name) {
    std::cout << "hello " << name << std::endl;
  }
}

int main(int argc, char* argv[]) {
  std::string name = "taihejin";
  cpp::display(name);
  return 0;
}
