#include "mblog.h"

bool operator==(const Mblog& x, const Mblog& y) {
  return x.mid_ == y.mid_ && x.create_at_ == y.create_at_;
}

bool operator!=(const Mblog& x, const Mblog& y) {
  return !operator==(x, y);
}

bool operator<(const Mblog& x, const Mblog& y) {
  if (x.mid_ != y.mid_) {
    return x.mid_ < y.mid_;
  }
  return x.create_at_ < y.create_at_;
}

bool operator<=(const Mblog& x, const Mblog& y) {
  return operator<(x, y) || operator==(x, y);
}

bool operator>(const Mblog& x, const Mblog& y) {
  if (x.mid_ != y.mid_) {
    return x.mid_ > y.mid_;
  }
  return x.create_at_ > y.create_at_;
}

bool operator>=(const Mblog& x, const Mblog& y) {
  return operator>(x, y) || operator==(x, y);
}

std::ostream& operator<<(std::ostream& os, const Mblog& x) {
  os << "{mid: " << x.mid_ << ", create_at: " << x.create_at_ << "}";
  return os;
}


