#include <iostream>
int main(int argc, char* argv[]) {
  std::cout << "Enter two number:" << std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;
  int lower, upper;
  if (v1 <= v2) {
    lower = v1;
    upper = v2;
  } else {
    lower = v2;
    upper = v1;
  }
  int sum = 0;
  for (int val = lower; val <= upper; ++val) {
    sum += val;
  }
  std::cout << "Sum of " << lower << " and " << upper << " is " << sum << std::endl;
  return 0;
}
