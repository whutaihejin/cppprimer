#include <iostream>
#include <vector>
#include <set>
template <typename T> void print(const T& container) {
  typename T::size_type i = 0;
  for (; i < container.size(); ++i) {
    std::cout <<container[i] << " ";
  }
}
int main(int argc, char* argv[]) {
  // for vector
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  print(vec);
  // for set not supported
  /*
  std::set<std::string> filter;
  filter.insert("sdau");
  filter.insert("whu");
  filter.insert("sina");
  print(filter);*/
  return 0;
}
