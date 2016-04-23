#ifndef MBLOG_H_
#define MBLOG_H_

#include <iostream>
#include <stdint.h>

class Mblog {
  public:
    Mblog(std::string mid, int64_t create_at = 0): mid_(mid), create_at_(create_at) { }
    Mblog(const Mblog& mblog): mid_(mblog.mid_), create_at_(mblog.create_at_) { }
    Mblog& operator=(const Mblog& mblog) {
      mid_ = mblog.mid_;
      create_at_ = mblog.create_at_;
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
