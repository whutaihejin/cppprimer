#include <iostream>
#include <vector>
#include <map>
template <typename T, typename I> T find(I begin, I end) {
  std::map<T, int> counter;
  typename std::map<T, int>::iterator iter;
  for (; begin != end; begin++) {
    if ((iter = counter.find(*begin)) == counter.end()) {
      counter.insert(std::make_pair(*begin, 1));
    } else {
      counter.erase(*begin);
      counter.insert(std::make_pair(*begin, iter->second + 1));
    }
  }
  int max = 0;
  T hit;
  for (iter = counter.begin(); iter != counter.end(); ++iter) {
    if (iter->second > max) {
      max = iter->second;
      hit = iter->first;
    }
  }
  return hit;
}

int main(int argc, char* argv[]) {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(5);
  vec.push_back(5);
  vec.push_back(5);
  vec.push_back(5);
  vec.push_back(2);
  vec.push_back(2);
  std::cout << find<int>(vec.begin(), vec.end()) << std::endl;
  return 0;
}
