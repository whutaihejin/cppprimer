#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  double value = 14.6;
  std::cout << value << "->" << static_cast<int32_t>(value) << std::endl;
  value = 15;
  std::cout << value << "->" << static_cast<int32_t>(value) << std::endl;
  value = 15.1;
  std::cout << value << "->" << static_cast<int32_t>(value) << std::endl;
  double weight[] = {0.5, 0.3, 0.2};
  int length[] = {10, 10, 10};
  int limit = 10;
  if (argc == 2) {
    limit = atoi(argv[1]);
  }
  // begin
  double min = weight[0];
  for (int i = 0; i < 3; i++) {
    if (min > weight[i]) {
      min = weight[i];
    }
  }
  if (min < 1e-7) {
    min = 1e-7;
  }
  double left = 0, right = 1.0 / min, mid;
  while (left < right - 1e-7) {
    mid = (left + right) / 2;
    double mount = 0, x;
    for (int i = 0; i < 3; i++) {
      x = weight[i] * length[i] * mid;
      mount += x > length[i] ? length[i] : x;
    }
    if (mount < limit) {
      left = mid;
    } else {
      right = mid;
    }
  }
  for (int i = 0; i < 3; i++) {
    double x = weight[i] * length[i] * mid;
    std::cout << i << " -> " << x << "->" << static_cast<int32_t>(x) + 1 << std::endl;
  }
  // eng
  return 0;
}
