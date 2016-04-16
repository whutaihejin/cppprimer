#include <iostream>
class Base {
  public:
    Base(int x): x_(x) {}
  private:
    int x_;
};

class Test {
  public:
  Test(): base_(0) {}
  private:
    Base base_;
};

int main(int argc, char* argv[]) {
  Test test;
  return 0;
}
