#include <iostream>
int main(int argc, char* argv[]) {
  int i = 10;
  while (i >= 0) {
    std::cout << i << std::endl;
    --i;
  }
  for (int i = 10; i >= 0; --i) {
    std::cout << i << std::endl;
  }
  return 0;
}
