#include <iostream>
#include <fstream>
int main(int argc, char* argv[]) {
  std::fstream file("/tmp/volume.dat", std::ios::out);
  int control = 20;
  for (int i = 0; i <= control; ++i) {
    for (int j = 0; j <= control; ++j) {
      for (int k = 0; k <= control; ++k) {
        for (int m = 0; m <= control; ++m) {
          for (int n = 0; n <= control; ++n) {
            file << i << ' ' << j  << ' ' << k << ' ' << m  << ' ' << n << std::endl;
          }
        }
      }
    }
  }
  file.close();
  return 0;
}
