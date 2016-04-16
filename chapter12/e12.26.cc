#include <iostream>
#include <fstream>
std::ifstream file("test.data");
class NoName {
  public:
    NoName(const std::string& name = "taihejin"): name_(name) {}
    NoName(std::istream& is = std::cin) {}
  private:
    std::string name_;
};

int main(int argc, char* argv[]) {
  // NoName n; // ambiguous
  return 0;
}
