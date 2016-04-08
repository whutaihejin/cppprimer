#include <iostream>
class A {
  public:
    A(): x_(0) {}
  private:
    int x_;
};
union TokenValue {
  char cval;
  int ival;
  double dval;
  // static int s;
  // int& rval;
  // A a;
};

class Token {
  public:
    enum TokenKind {INT, CHAR, DBL};
    TokenKind kind;
    union {
      char cval;
      int ival;
      double dval;
    } val;
};
int main(int argc, char* argv[]) {
  TokenValue first_token = {'A'};
  std::cout << first_token.cval << std::endl;
  std::cout << first_token.ival << std::endl;
  std::cout << first_token.dval << std::endl;
  TokenValue token2;
  token2.dval = 22.0;
  TokenValue* p = new TokenValue;
  p->ival = 66;
  delete p;

  Token token;
  token.kind = Token::CHAR;
  switch (token.kind) {
    case Token::INT:
      token.val.ival = 42; break;
    case Token::CHAR:
      token.val.cval = 'a'; break;
    case Token::DBL:
               token.val.dval = 2.66; break;
  }
  return 0;
}
