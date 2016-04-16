#include <iostream>
class NoName {
  public:
    NoName(): pstring(0), ival(0), dval(0) {}
    NoName(std::string* p, int i, double d): pstring(p), ival(i), dval(d) {}
  private:
    std::string* pstring;
    int ival;
    double dval;
};

int main(int argc, char* argv[]) {
  NoName n;
  std::string name("taihejin");
  NoName nn(&name, 1, 3.0);
  return 0;
}
