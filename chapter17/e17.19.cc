#include <iostream>
#include <stdint.h>
namespace protocol {
  namespace http {
    class Matrix {
      public:
        Matrix add(const Matrix&, const Matrix&);
    };
  }
}

protocol::http::Matrix protocol::http::Matrix::add(const Matrix& x, const Matrix& y) {
  return x;
}

int main(int argc, char* argv[]) {
  protocol::http::Matrix x;
  protocol::http::Matrix y;
  protocol::http::Matrix matrix = x.add(x, y);
  return 0;
}
