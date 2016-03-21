#include <iostream>
#include <stdint.h>
#include <map>
#include <vector>
using std::map;

void display() {
  using std::vector;
  vector<int32_t> vec;
  std::cout << vec.size() << std::endl;
}

namespace http {
  using std::vector;
  vector<int32_t> vec;
}

class Matrix {
  public:
    //using std::vector;
    //vector<int32_t> vec;
    Matrix() {
      //vec.push_back(1);
    }
};

int main(int argc, char* argv[]) {
  map<int32_t, int32_t> word;
  display();
  std::cout << http::vec.size() << std::endl;
  Matrix matrix;
  return 0;
}
