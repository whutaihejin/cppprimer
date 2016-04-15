#include <iostream>

class Person {
  public:
    Person() {}
    Person(const std::string& name, const std::string& address): name_(name), address_(address) {}
    std::string GetName() const { return name_; }
    std::string GetAddress() const { return address_; }
  private:
    std::string name_;
    std::string address_;
};

int main(int argc, char* argv[]) {
  Person person("taihejin", "beijing");
  std::cout << person.GetName() << std::endl;
  std::cout << person.GetAddress() << std::endl;
  return 0;
}
