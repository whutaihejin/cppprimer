#include <iostream>
typedef int Type;

Type initVal() {
  return 22;
}

class Exercise {
  public:
    typedef std::string Type;
    ::Type setVal(::Type);
    Type initVal() {
      return "hello";
    }
    void print() {
      std::cout << val << std::endl;
    }
  private:
    int val;
};

Type Exercise::setVal(::Type param) {
  val = param + ::initVal();
  return val;
}

int main(int argc, char* argv[]) {
  Exercise e;
  e.setVal(11);
  e.print();
  return 0;
}
