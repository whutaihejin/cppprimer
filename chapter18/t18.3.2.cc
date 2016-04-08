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
  return 'A';
}

char Screen::get(Screen::index ht, Screen::index wd) const {
  return 'B';
}

char Screen::print() const {
  std::cout << "whu" << std::endl;
  return 'C';
}

int main(int argc, char* argv[]) {
  char (Screen::*p)() const = &Screen::get;
  Screen screen;
  std::cout << screen.get() << std::endl;
  std::cout << (screen.*p)() << std::endl;
  Screen *pscreen = &screen;
  std::cout << pscreen->get() << std::endl;
  std::cout << (pscreen->*p)() << std::endl;
  return 0;
}
