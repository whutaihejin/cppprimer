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
  int count = 1;
  for (int val = lower; val <= upper; ++val, ++count) {
    std::cout << val << " ";
    if (count >= 10) {
      std::cout << std::endl;
      count = 0;
    }
  }
  if ((upper - lower + 1) % 10 != 0) {
    std::cout << std::endl;
  }
  return 0;
}
