#include <iostream>

// third kinds of inline member function
class Screen {
  public:
    typedef std::string::size_type index_t;
    Screen(): contents_("whu"), width_(1), height_(1) {}
    Screen(const std::string& contents): contents_(contents), width_(1), height_(1) {} 
    Screen& move(index_t, index_t);
    Screen& set(char);
    Screen& set(index_t, index_t, char);

    Screen& display(std::ostream&);
    const Screen& display(std::ostream&) const;



    char get() const {
      return contents_[cursor_];
    };
    inline char get(index_t ht, index_t wd) const;
    index_t get_cursor() const;
  private:
    void do_display(std::ostream& os) const {
      os << contents_ << std::endl;
    }
    std::string contents_;
    index_t cursor_;
    index_t height_;
    index_t width_;
};

char Screen::get(index_t r, index_t c) const {
  return contents_[cursor_];
}

inline Screen::index_t Screen::get_cursor() const {
  return cursor_;
}

Screen& Screen::set(char c) {
  contents_[cursor_] = c;
  return *this;
}
Screen& Screen::set(index_t r, index_t c, char ch) {
  contents_[cursor_] = ch;
  // dummy
}

Screen& Screen::move(index_t r, index_t c) {
  index_t row = r * width_;
  cursor_ = row + c;
  return *this;
}

Screen& Screen::display(std::ostream& os) {
  do_display(os);
  return *this;
}

const Screen& Screen::display(std::ostream& os) const {
  do_display(os);
  return *this;
}

int main(int argc, char* argv[]) {
  Screen screen("taihejin");
  screen.move(2, 0).set('$').display(std::cout);
  std::cout << screen.get() << std::endl;
  std::cout << screen.get(0, 0) << std::endl;
  return 0;
}
