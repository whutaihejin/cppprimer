#include <iostream>

class Clazz {};

class Base : public Clazz {};

class Derived1 : virtual public Base {};

class Derived2 : virtual public Base {};

class MI : public Derived1, public Derived2 {};

class Final : public MI {};

int main(int argc, char* argv[]) {
  Base* pb;
  Clazz* pc;
  MI* pmi;
  Derived2* pd2;
  // a 
  // pb = new Clazz; // invalid conversion from ‘Clazz*’ to ‘Base*’ 
  // b
  // pc = new Final; // ‘Clazz’ is an ambiguous base of ‘Final’
  // c
  // pmi = pb;
  pd2 = pmi;
  return 0;
}
