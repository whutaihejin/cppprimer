#include <iostream>
int main(int argc, char* argv[]) {
  std::cout << "Enter two number:" << std::endl;
  int v1, v2;
  std::cin >> v1 >> v2;
  int max = v1 >= v2 ? v1 : v2;
  std::cout << "max of " << v1 << " and " << v2 << " is " << max << std::endl;
  return 0;
}
