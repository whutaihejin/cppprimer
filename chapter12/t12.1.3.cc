#include <iostream>
class Screen {
  public:
    typedef std::string::size_type index_t;
    Screen(): contents_("whu") {}
    char get() const {
      return contents_[cursor_];
    };
    char get(index_t ht, index_t wd) const {
      // dummy
      return contents_[0];
    }
  private:
    std::string contents_;
    index_t cursor_;
    index_t height_;
    index_t width_;
};

int main(int argc, char* argv[]) {
  Screen screen;
  std::cout << screen.get() << std::endl;
  std::cout << screen.get(0, 0) << std::endl;
  return 0;
}
