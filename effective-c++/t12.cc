#include <iostream>
class Customer {
  public:
    explicit Customer() {}
    explicit Customer(const std::string&);
    Customer(const Customer&);
    Customer& operator=(const Customer&);
  private:
    std::string name_;
};

Customer::Customer(const std::string& name): name_(name) { }

Customer::Customer(const Customer& rhs): name_(rhs.name_) { }
  
Customer& Customer::operator=(const Customer& rhs) {
  name_ = rhs.name_;
  return *this;
}

class VIPCustomer : public Customer {
  public:
    explicit VIPCustomer(int);
    explicit VIPCustomer(const std::string& name, int);
    VIPCustomer(const VIPCustomer&);
    VIPCustomer& operator=(const VIPCustomer&);
  private:
    int priority_;
};

VIPCustomer::VIPCustomer(int priority): priority_(priority) {}

VIPCustomer::VIPCustomer(const std::string& name, int priority): Customer(name), priority_(priority) {}

VIPCustomer::VIPCustomer(const VIPCustomer& rhs): Customer(rhs), priority_(rhs.priority_) {}

VIPCustomer& VIPCustomer::operator=(const VIPCustomer& rhs) {
  Customer::operator=(rhs);
  priority_ = rhs.priority_;
  return *this;
}

int main(int argc, char* argv[]) {
  Customer c("taihejin");
  Customer d("zhanglong");
  Customer e(c);
  e = d;

  //
  //VIPCustomer v0 = 0;
  VIPCustomer v1("taihejin", 1);
  VIPCustomer v2("zhanglong", 2);
  VIPCustomer v3 = v1;
  VIPCustomer v4(v2);
  v4 = v1;
  return 0;
}
