#include <iostream>

template <typename T>
const T& max(const T& x, const T& y) {
  return x > y ? x : y;
}

int main(int argc, char* argv[]) {
  std::cout << max(1, 2) << std::endl;
  std::cout << max(2.0, 1.0) << std::endl;
  return 0;
}
