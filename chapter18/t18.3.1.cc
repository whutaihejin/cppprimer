#include <iostream>
#include <string>

class Screen {
  public:
    typedef std::string::size_type index;
    char get() const;
    char get(index ht, index wd) const;
    char print() const;
    std::string content;
  private:
    index cursor;
    index height, width;
};

char Screen::get() const {
  return '0';
}

char Screen::get(Screen::index ht, Screen::index wd) const {
  return '0';
}

char Screen::print() const {
  std::cout << "whu" << std::endl;
  return '0';
}

typedef char (Screen::*Action)(Screen::index, Screen::index) const;

Screen& action(Screen& screen, Action actor = &Screen::get) {
  return screen;
}

int main(int argc, char* argv[]) {
  char (Screen::*p)() const = &Screen::print;
  p = &Screen::get;
  char (Screen::*pget)(Screen::index, Screen::index) const = &Screen::get;
  std::string Screen::*pc = &Screen::content;
  Action get = &Screen::get;
  Screen screen;
  action(screen);
  action(screen, get);
  action(screen, &Screen::get);
  return 0;
}
