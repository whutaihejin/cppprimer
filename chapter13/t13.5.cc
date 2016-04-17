#include <iostream>

class Base {
  public:
    Base(int* ptr, int val): val_(val), ptr_(ptr) {}

    int* get_ptr() const {
      return ptr_;
    }
    int get_val() const {
      return val_;
    }
    void set_ptr(int* ptr) {
      ptr_ = ptr;
    }
    void set_val(int val) {
      val_ = val;
    }
    int get_ptr_val() {
      return *ptr_;
    }
    void set_ptr_val(int val) {
      *ptr_ = val;
    }
  private:
    int val_;
    int* ptr_;

};

int main(int argc, char* argv[]) {
  int val = 1;
  Base b(&val, 22);
  Base c(b);
  b.set_val(33);
  std::cout << b.get_val() << std::endl;
  std::cout << c.get_val() << std::endl;
  std::cout << "--- separate ---" << std::endl;
  b.set_ptr_val(66);
  std::cout << b.get_ptr_val() << std::endl;
  std::cout << c.get_ptr_val() << std::endl;
  return 0;
}
