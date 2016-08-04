#include <iostream>
#include <iterator>
int main(int argc, char* argv[]) {
  std::istream_iterator<int> eos;
  std::istream_iterator<int> iter(std::cin);
  while (iter != eos) {
    std::cout << *iter++ << " ";
  }
  std::cout << std::endl;
  return 0;
}
