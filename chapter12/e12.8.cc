#include <iostream>

class Sales_item {
  public:
    double avg_price() const {
      if (units_sold) {
        return revenue / units_sold;
      } else {
        return 0;
      }
    }
  private:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};

int main(int argc, char* argv[]) {
  Sales_item item;
  return 0;
}
