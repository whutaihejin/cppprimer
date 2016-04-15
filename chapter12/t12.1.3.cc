#include <iostream>

// third kinds of inline member function
class Screen {
  public:
    typedef std::string::size_type index_t;
    Screen(): contents_("whu") {}
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
};

char Screen::get(index_t r, index_t c) {
  return content_[0];
}

inline Screen::get_cursor() const {
  return cursor_;
}

int main(int argc, char* argv[]) {
  Screen screen;
  std::cout << screen.get() << std::endl;
  std::cout << screen.get(0, 0) << std::endl;
  return 0;
}
