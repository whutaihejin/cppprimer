#include <iostream>
int main(int argc, char* argv[]) {
  int x = 1; 
  int y = 2;
  int z = x + y;
  std::cout << z << std::endl;
  int* p = NULL;
  z = *p;
  return 0;
}
