#include <iostream>
#include <vector>
int main(int argc, char* argv[]) {
  std::vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  std::vector<int> v2;
  v2.assign(v1.begin() + 1, v1.end());
  for (std::vector<int>::iterator iter = v2.begin(); iter != v2.end(); iter++) {
    std::cout << *iter << std::endl;
  }
  return 0;
}
