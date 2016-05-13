#include <iostream>

class ItemBase {
  public:
    ItemBase(const std::string& book = "", double price = 0.0): isbn_(book), price_(price) { }
    std::string Book() const { 
      return isbn_; 
    }
    virtual double NetPrice(std::size_t n) const {
      return n * price_;
    }
    virtual ~ItemBase() { }
  private:
    std::string isbn_;
  protected:
    double price_;
};

class BulkBase : public ItemBase {
  public:
    void Memfcn(const BulkBase&, const ItemBase&);
};

void BulkBase::Memfcn(const BulkBase& bulk, const ItemBase& base) {
  double ret = price_;
  ret = bulk.price_;
  //double ret = base.price_;
}

int main(int argc, char* argv[]) {
  ItemBase base;
  BulkBase bulk;
  return 0;
}
