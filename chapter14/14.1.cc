#include <iostream>
#include "mblog.h"

int main(int argc, char* argv[]) {
  Mblog x("123", 23);
  Mblog y("123", 66);
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << "x == y " << (x == y) << std::endl;
  std::cout << "x != y " << (x != y) << std::endl;
  std::cout << "x < y " << (x < y) << std::endl;
  std::cout << "x <= y " << (x <= y) << std::endl;
  std::cout << "x > y " << (x > y) << std::endl;
  std::cout << "x >= y " << (x >= y) << std::endl;
  return 0;
}
