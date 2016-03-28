#include <iostream>
class Base {
  public:
    Base(): ix_(1) {
      std::cout << "Base ix_=" << ix_ << std::endl;
    }
    void bar(int x) {
      std::cout << "Base x=" << x << std::endl;
    }
  protected:
    int ix_;
};

class Dog : virtual public Base {
  public:
    Dog(): cx_(65) {
      std::cout << "Dog cx_=" << cx_ << std::endl;
    }
    void bar(char x) {
      std::cout << "Dog bar x=" << x << std::endl;
    }
    void foo(char x) {
      std::cout << "Dog foo x=" << x << std::endl;
    }
  protected:
    char cx_;
};

class Cat : virtual public Base {
  public:
    Cat(): ix_(3), cx_(65) {
      std::cout << "Cat ix_=" << ix_ << std::endl;
    }
    void foo(int x) {
      std::cout << "Cat foo x=" << x << std::endl;
    }
  protected:
    int ix_;
    char cx_;
};

class MVI : public Dog, public Cat {
  public:
    MVI() {
      std::cout << "ix_=" << ix_ 
        << " cx_=" << Dog::cx_ << std::endl;
      bar(66);
      Cat::foo(67);
    }
};

int main(int argc, char* argv[]) {
  MVI mvi;
  return 0;
}
