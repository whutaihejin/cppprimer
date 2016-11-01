#include <iostream>
int main(int argc, char* argv[]) {
  std::cout << "sizeof(bool)=" << sizeof(bool) << std::endl;
  std::cout << "sizeof(short)=" << sizeof(short) << std::endl;
  std::cout << "sizeof(signed short)=" << sizeof(signed short) << std::endl;
  std::cout << "sizeof(unsigned short)=" << sizeof(unsigned short) << std::endl;
  std::cout << "sizeof(int)=" << sizeof(int) << std::endl;
  std::cout << "sizeof(signed int)=" << sizeof(signed int) << std::endl;
  std::cout << "sizeof(unsigned int)=" << sizeof(unsigned int) << std::endl;
  std::cout << "sizeof(signed)=" << sizeof(signed) << std::endl;
  std::cout << "sizeof(unsigned)=" << sizeof(unsigned) << std::endl;
  std::cout << "sizeof(char)=" << sizeof(char) << std::endl;
  std::cout << "sizeof(signed char)=" << sizeof(signed char) << std::endl;
  std::cout << "sizeof(unsigned char)=" << sizeof(unsigned char) << std::endl;
  std::cout << "sizeof(wchar_t)=" << sizeof(wchar_t) << std::endl;
  std::cout << "sizeof(signed wchar_t)=" << sizeof(signed wchar_t) << std::endl;
  std::cout << "sizeof(unsigned wchar_t)=" << sizeof(unsigned wchar_t) << std::endl;
  std::cout << "sizeof(long)=" << sizeof(long) << std::endl;
  std::cout << "sizeof(signed long)=" << sizeof(signed long) << std::endl;
  std::cout << "sizeof(unsigned long)=" << sizeof(unsigned long) << std::endl;
  std::cout << "sizeof(float)=" << sizeof(float) << std::endl;
  std::cout << "sizeof(double)=" << sizeof(double) << std::endl;
  std::cout << "sizeof(long double)=" << sizeof(long double) << std::endl;
  bool true_val = true, false_val = false;
  std::cout << true_val << " " << false_val << std::endl;
  short short_max = 32767;
  unsigned short ushort_max = 65535;
  std::cout << short_max << " " << ushort_max << std::endl;
  return 0;
}
