#include <stdint.h>
#include <iostream>
#include <vector>

void explore(const std::vector<int32_t>& volume) {
  // show internal
  std::cout << "size=" << volume.size() << std::endl;
  for (std::vector<int32_t>::const_iterator iter = volume.begin(); iter != volume.end(); iter++) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  std::vector<int32_t> volume;
  volume.push_back(1);
  volume.push_back(2);
  volume.push_back(3);
  std::cout << "volume[1]=" << volume[1] << std::endl;
  explore(volume);
  // resize
  volume.resize(1);
  explore(volume);
  volume.resize(3);
  explore(volume);
  return 0;
}
