#include <iostream>
#include <string>

class Clazz {};

class Base : public Clazz {
  public:
    Base(): name_("Base") {}
    Base(std::string name): name_(name) {}
    Base(const Base& base): name_(base.name_) {}
  private:
    std::string name_;
};

class Derived1 : virtual public Base {
  public:
    Derived1(): Base("Derived1") {}
    Derived1(std::string name): Base(name) {}
    Derived1(const Derived1& d): Base(d) {}
};

class Derived2 : virtual public Base {
  public:
    Derived2(): Base("Derived2") {}
    Derived2(std::string name): Base(name) {}
    Derived2(const Derived2& d): Base(d) {}
};

class MI : public Derived1, public Derived2 {
  public:
    MI(): Base("MI") {}
    MI(std::string name): Base(name), Derived1(name), Derived2(name) {}
    MI(const MI& m): Base(m), Derived1(m), Derived2(m) {}
};

class Final : public MI {
  public:
    Final(): Base("Final") {}
    Final(std::string name): Base(name), MI(name) {}
    Final(const Final& f): Base(f), MI(f) {}
};

int main(int argc, char* argv[]) {
  Final f;
  Final ff("taihejin");
  Final fff(ff);
  return 0;
}
