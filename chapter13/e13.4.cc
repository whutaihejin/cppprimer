#include <iostream>

struct Base {
  public:
    Base(): pstring(new std::string), i(0), d(0) {
      std::cout << "default constructor" << std::endl;
    }
    Base(const Base& base): 
      pstring(new std::string(*base.pstring)), 
      i(base.i), 
      d(base.d) {
        std::cout << "copy constructor" << std::endl;
      }
    ~Base() { 
      delete pstring;
      std::cout << "destructor" << std::endl;
    }
  private:
    std::string* pstring;
    int i;
    double d;
};

int main(int argc, char* argv[]) {
  Base b;
  Base c = b;
  std::cout << "--- separator ---" << std::endl;
  Base* d = new Base;
  delete d;
  return 0;
}
