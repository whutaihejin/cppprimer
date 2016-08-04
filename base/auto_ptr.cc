#include <iostream>
#include <memory>
class Person {
  public:
    Person(): id_(0) { }
    Person(int id, std::string name): id_(id), name_(name) { }
    ~Person() { 
      std::cout << id_ << " destroy!" << std::endl;
    }
  private:
    int id_;
    std::string name_;
    friend std::ostream& operator<<(std::ostream&, const Person&);
};

std::ostream& operator<<(std::ostream& out, const Person& person) {
  out << "[" << person.id_ << ", " << person.name_ << "]"; 
  return out;
}

int main(int argc, char* argv[]) {
  Person p(11, "taihejin");
  std::cout << p << std::endl;
  std::auto_ptr<Person> pp(new Person(22, "zhanglong"));
  if (pp.get()) {
    std::cout << "pp is not null!" << std::endl;
  }
  std::auto_ptr<Person> pnull(NULL);
  if (pnull.get() == NULL) {
    std::cout << "pnull is null" << std::endl; 
  }
  return 0;
}
