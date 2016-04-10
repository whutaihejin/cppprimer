#include <iostream>
template <typename T>
int compare(const T& x, const T& y) {
  if (x > y) return 1;
  if (x < y) return -1;
  return 0;
}

int main(int argc, char* argv[]) {
  compare(1, 2);
  compare("hi", "hello"); // compile error: char [3] and char [6]
  return 0;
}
