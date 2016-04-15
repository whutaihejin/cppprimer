#include <iostream>

class Person {
  public:
    Person() {}
    Person(const std::string& name, const std::string& address): name_(name), address_(address) {}
  private:
    std::string name_;
    std::string address_;
};

int main(int argc, char* argv[]) {
  Person person;
  return 0;
}
