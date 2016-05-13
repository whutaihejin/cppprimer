#ifndef MBLOG_H_
#define MBLOG_H_

#include <iostream>
#include <stdint.h>

class Mblog {
  public:
    Mblog(std::string mid, int64_t create_at = 0): mid_(mid), create_at_(create_at) {
      std::cout << "constructor mblog" << std::endl;
    }
    Mblog(const Mblog& mblog): mid_(mblog.mid_), create_at_(mblog.create_at_) { 
      std::cout << "copy constructor" << std::endl;
    }
    Mblog& operator=(const Mblog& mblog) {
      mid_ = mblog.mid_;
      create_at_ = mblog.create_at_;
      std::cout << "operator= function" << std::endl;
    }
    ~Mblog() {
      std::cout << "destructor function" << std::endl;
    }
  private:
    std::string mid_;
    int64_t create_at_;
    // friend function list
    friend bool operator==(const Mblog&, const Mblog&);
    friend bool operator!=(const Mblog&, const Mblog&);
    friend bool operator<(const Mblog&, const Mblog&);
    friend bool operator<=(const Mblog&, const Mblog&);
    friend bool operator>(const Mblog&, const Mblog&);
    friend bool operator>=(const Mblog&, const Mblog&);
    friend std::ostream& operator<<(std::ostream&, const Mblog&);
};
    
bool operator==(const Mblog&, const Mblog&);
bool operator!=(const Mblog&, const Mblog&);
bool operator<(const Mblog&, const Mblog&);
bool operator<=(const Mblog&, const Mblog&);
bool operator>(const Mblog&, const Mblog&);
bool operator>=(const Mblog&, const Mblog&);
std::ostream& operator<<(std::ostream&, const Mblog&);

#endif
