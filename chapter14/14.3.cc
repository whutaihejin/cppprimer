#include <iostream>
#include "mblog.h"

Mblog generate() {
  Mblog mblog("12666", 1000);
  return mblog;
}

int main(int argc, char* argv[]) {
  Mblog mblog = generate();
  std::cout << mblog << std::endl;
  return 0;
}
