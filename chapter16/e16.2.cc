#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
template <typename T>
void write(std::ostream& out, const T& value) {
  out << value;
}
int main(int argc, char* argv[]) {
  write(std::cout, 123);
  write(std::cout, "hello world!\n");
  std::ofstream f("log");
  write(f, "hello world!\n");
  std::stringstream ss;
  write(ss, "hello world!");
  std::cout << ss.str() << std::endl;
  return 0;
}
