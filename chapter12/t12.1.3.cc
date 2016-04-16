#include <iostream>

// third kinds of inline member function
class Screen {
  public:
    typedef std::string::size_type index_t;
    Screen(): contents_("whu"), cursor_(0), counter_(0) {}
    char get() const {
      return contents_[cursor_];
    };
    inline char get(index_t ht, index_t wd) const;
    index_t get_cursor() const;
  private:
    std::string contents_;
    index_t cursor_;
    index_t height_;
    index_t width_;
    mutable int counter_;
};

char Screen::get(index_t r, index_t c) const {
  return contents_[0];
}

inline Screen::index_t Screen::get_cursor() const {
  std::cout << ++counter_ << std::endl;
  return cursor_;
}

int main(int argc, char* argv[]) {
  Screen screen;
  std::cout << screen.get() << std::endl;
  std::cout << screen.get(0, 0) << std::endl;
  std::cout << screen.get_cursor() << std::endl;
  std::cout << screen.get_cursor() << std::endl;
  return 0;
}
