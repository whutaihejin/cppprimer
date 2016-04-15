#include <iostream>

class Y;

class X {
  private:
    Y* y_;
};

class Y {
  private:
    X* x_;
};

int main(int argc, char* argv[]) {
  X x;
  Y y;
  return 0;
}
