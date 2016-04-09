#include <iostream>
int a = 11;
int val = 22;
void foo(int val) {
  static int si = 5;
  enum Loc {a = 1024, b};
  class Bar {
    public:
      Loc locVal;
      int barVal;
      void fooBar(Loc l = a) {
        // barVal = val;
        barVal = ::val;
        std::cout << barVal << std::endl;
        barVal = si;
        std::cout << barVal << std::endl;
        barVal = b;
        std::cout << barVal << std::endl;
      }
  };
  Bar bar;
  bar.fooBar();
}

int main(int argc, char* argv[]) {
  foo(2);
  return 0;
}
