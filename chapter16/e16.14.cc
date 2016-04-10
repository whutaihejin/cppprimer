#include <iostream>
#include <vector>
#include <set>
#include <map>
template <typename T> void print(const T& container) {
  for (typename T::const_iterator iter = container.begin(); iter != container.end(); iter++) {
    std::cout << *iter << std::endl;
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
  // for set
  std::set<std::string> filter;
  filter.insert("sdau");
  filter.insert("whu");
  filter.insert("sina");
  print(filter);
  // for map not supported
  /*
  std::map<int, std::string> dict;
  dict.insert(std::make_pair(1, "sdau"));
  dict.insert(std::make_pair(2, "whu"));
  dict.insert(std::make_pair(3, "sina"));
  print(dict);*/
  return 0;
}
