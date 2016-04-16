#include <iostream>
#include <fstream>
std::ifstream file("test.data");
class NoName {
  public:
    NoName(): name("NoName"), ival(0), pd(0), cin(file) {}
  private:
    const std::string name;
    int ival;
    double* pd;
    std::ifstream& cin;
};

int main(int argc, char* argv[]) {
  NoName n;
  return 0;
}
