#include <iostream>

int main(int argc, char* argv[]) {
#ifdef DEBUG
  std::cout << "This is debug info" << std::endl;
#endif
  return 0;
}
