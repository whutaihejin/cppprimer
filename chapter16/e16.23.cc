#include <iostream>
#include <algorithm>
int main(int argc, char* argv[]) {
  // std::cout << std::max(1, 2.0) << std::endl; // compile error
  std::cout << std::max<double>(1, 2.0) << std::endl;
  return 0;
}
