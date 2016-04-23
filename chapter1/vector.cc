#include <iostream>
#include <vector>

void print(std::vector<int>& vec) {
  for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  std::vector<int> vec;
  for (int i = 0; i < 10; i++) {
    vec.push_back(i + 1);
  }
  print(vec);
  
  int val;
  std::vector<int>::iterator iter = vec.begin();
  for (; iter != vec.end(); iter++) {
    if (*iter == 4) {
      val = *iter;
      vec.erase(iter);
      vec.insert(vec.begin() + 1, val);
      break;
    }
  }
  print(vec);
}
