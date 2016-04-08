#include <iostream>
#include <stdexcept>
int Exception() {
  throw std::runtime_error("this is a runtime_erro exception");
  return 0;
}

class Dog {
  public:
    Dog(std::string name): name_(name) {}
    ~Dog() {
      throw std::runtime_error("this is a dog exception");
    }
  private:
    std::string name_;
};

int main(int argc, char* argv[]) {
  // Exception();
  Dog dog("vink");
  return 0;
}
