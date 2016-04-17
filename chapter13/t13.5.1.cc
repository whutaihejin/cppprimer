#include <iostream>

class Smarter {
  int* ptr_;
  //
  std::size_t ref_num_;
  Smarter(int* ptr): ptr_(ptr), ref_num_(1) {}
  ~Smarter() { delete ptr_; }
  //
  friend class Base;
};

class Base {
  public:
    Base(int* ptr, int val): smarter_(new Smarter(ptr)), val_(val) {}
    Base(const Base& base): val_(base.val_), smarter_(base.smarter_) {
      smarter_->ref_num_++;
    }
    Base& operator=(const Base& base) {
      if (--smarter_->ref_num_ == 0) {
        delete smarter_;
      }
      smarter_ = base.smarter_;
      smarter_->ref_num_++;
      val_ = base.val_;
      return *this;
    }
    int* get_ptr() const {
      return smarter_->ptr_;
    }
    int get_val() const {
      return val_;
    }
    void set_ptr(int* ptr) {
      smarter_->ptr_ = ptr;
    }
    void set_val(int val) {
      val_ = val;
    }
    int get_ptr_val() {
      return *smarter_->ptr_;
    }
    void set_ptr_val(int val) {
      *smarter_->ptr_ = val;
    }
    ~Base() {
      if (--smarter_->ref_num_ == 0) {
        delete smarter_;
      }
    }
  private:
    int val_;
    Smarter* smarter_;
};


int main(int argc, char* argv[]) {
  int* p = new int(123); // p must be a dynamic allocator in heap
  Base base(&p, 10);
  Base base2(base);
  Base base3 = base2;
  base3 = base;
  return 0;
}
