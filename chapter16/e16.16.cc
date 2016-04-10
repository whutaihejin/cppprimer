#include <iostream>
template <typename T, std::size_t L> void print(T (&array)[L]) {
  for (std::size_t i = 0; i < L; ++i) {
    std::cout << array[i] << " ";
  }
}
int main(int argc, char* argv[]) {
  int array[10] = {1, 2, 3, 4, 5, 9};
  print(array);
  return 0;
}
