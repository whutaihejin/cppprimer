#include <iostream>
int main(int argc, char* argv[]) {
  int sum = 0;
  for (int i = 50; i <= 100; ++i) {
    sum += i;
  }
  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
  int val = 50, suy = 0;
  while (val <= 100) {
    suy += val;
    ++val;
  }
  std::cout << "Sum of 50 to 100 inclusive is " << suy << std::endl;
  return 0;
}
