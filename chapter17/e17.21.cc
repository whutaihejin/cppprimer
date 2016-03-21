#include <iostream>
namespace exercise {
  int ivar = 0;
  double dvar = 0;
  const int limit = 1000;
}

int ivar = 0;
/*using exercise::ivar;
using exercise::dvar;
using exercise::limit;*/
int main(int argc, char* argv[]) {
using namespace exercise;
  double dvar = 3.1416;
  int iobj = limit + 1;
  //++ivar;
  ++::ivar;
  return 0;
}
