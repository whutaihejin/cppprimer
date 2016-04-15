#include <iostream>
class Screen {
  public:
  private:
    std::string contents_;
    std::string::size_type cursor;
    std::string::size_type height_;
    std::string::size_type width_;
};

int main(int argc, char* argv[]) {
  Screen screen;
  return 0;
}
