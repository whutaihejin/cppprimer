#include <iostream>
#include <set>
int main(int argc, char* argv[]) {
  std::set<int> set_;
  set_.insert(1);
  set_.insert(2);
  set_.insert(3);
  set_.insert(4);
  set_.insert(5);

  for (std::set<int>::iterator iter = set_.begin(); iter != set_.end(); iter++) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;

  std::set<int>::iterator iter = set_.find(3);
  set_.erase(iter);
  
  for (std::set<int>::iterator iter = set_.begin(); iter != set_.end(); iter++) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;

  if (set_.find(6) == set_.end()) {
    std::cout << "not found for 6" << std::endl;
  }
  return 0;
}
