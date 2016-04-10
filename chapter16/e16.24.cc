#include <iostream>
template <typename T> int compare(const T& x, const T& y) {
  if (x < y) return -1;
  if (y < x) return 1;
  return 0;
}
int main(int argc, char* argv[]) {
  int ival = 3;
  short sval = 4;
  // std::cout << compare(ival, sval) << std::endl; // compile error
  std::cout << compare<int>(ival, sval) << std::endl;
  return 0;
}
