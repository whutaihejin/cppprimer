#include <iostream>
#include <vector>

void display(const std::vector<int>&);

int main(int argc, char* argv[]) {
  display(NULL);
  return 0;
}

void display(const std::vector<int>& group) {
  std::cout << group.size() << std::endl;
}
