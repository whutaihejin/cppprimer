#include <iostream>
int main(int argc, char* argv[]) {
  int val;
  int negative = 0;
  while (std::cin >> val) {
    if (val < 0) {
      ++negative;
    }
  }
  std::cout << "Negative amount is " << negative << std::endl;
  return 0;
}
