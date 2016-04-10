#include <iostream>
template <typename T> int compare(const T& x, const T& y) {
  if (x < y) return -1;
  if (y < x) return 1;
  return 0;
}
int main(int argc, char* argv[]) {
  std::cout << compare<std::string>("hi", "world") << std::endl;
  return 0;
}
