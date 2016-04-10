#include <iostream>
template <typename T>
int compare(const T& x, const T& y) {
  if (x > y) return 1;
  if (x < y) return -1;
  return 0;
}
int main(int argc, char* argv[]) {
  std::cout << compare(1, 2) << std::endl;
  std::cout << compare(2, 2) << std::endl;
  std::cout << compare(3, 2) << std::endl;
  std::cout << compare(1L, 2L) << std::endl;
  std::cout << compare(1.0, 2.0) << std::endl;
  std::cout << compare('A', 'A') << std::endl;
  std::string a = "hi", b = "world";
  std::cout << compare(a, b) << std::endl;
  std::cout << compare(b, a) << std::endl;
  return 0;
}
