#include <iostream>
template <typename T, std::size_t L> std::size_t len(T (&array)[L]) {
  std::cout << "length=" <<L << std::endl;
  return L;
}
int main(int argc, char* argv[]) {
  int array[10] = {1, 2, 3, 4, 5};
  len(array);
  return 0;
}
