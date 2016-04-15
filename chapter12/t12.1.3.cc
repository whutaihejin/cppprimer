#include <iostream>
class Screen {
  public:
    typedef std::string::size_type index_t;
  private:
    std::string contents_;
    index_t cursor;
    index_t height_;
    index_t width_;
};

int main(int argc, char* argv[]) {
  Screen screen;
  return 0;
}
