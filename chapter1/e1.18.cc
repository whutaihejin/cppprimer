#include <iostream>
int main(int argc, char* argv[]) {
  std::cout << "Enter two number:" << std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;
  int lower = v1, upper = v2;
  if (v1 > v2) {
    lower = v2;
    upper = v1;
  }
  for (int val = lower; val <= upper; ++val) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}
