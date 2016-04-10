#include <iostream>

template <typename T>
T abs(const T& value) {
  return value < 0 ? -value : value;
}

int main(int argc, char* argv[]) {
  std::cout << abs(-1) << std::endl;
  std::cout << abs(2L) << std::endl;
  std::cout << abs(-2.0) << std::endl;
  std::cout << abs(0) << std::endl;
  return 0;
}
