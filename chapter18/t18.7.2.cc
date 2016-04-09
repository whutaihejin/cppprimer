#include <iostream>
int main(int argc, char* argv[]) {
  volatile int v = 66;
  int* volatile vip;
  volatile int* ivp;
  volatile int* volatile vivp;
  // int* ip = &v; // can't convert volatile int* to int*
  volatile int* ip = &v;
  ivp = &v;
  vivp = &v;
  std::cout << "ivp=" << *ivp
            << " vivp=" << *vivp << std::endl;
  return 0;
}
