#include <iostream>

class File {
  public:
    typedef unsigned int bit_t;
    bit_t mode: 2;
    bit_t modified: 1;
    bit_t prot_owner: 3;
    bit_t prot_group: 3;
    bit_t prot_world: 3;

    void write();
    void close();

    inline void setWrite() {
      mode = WRITE;
    }

    inline void setRead() {
      mode = READ;
    }

    inline bool isRead() {
      return mode & READ;
    }

    inline bool isWrite() {
      return mode & WRITE;
    }

  private:
    enum {READ = 01, WRITE = 02};
};
void File::write() {
  modified = 1;
}

void File::close() {
  if (modified) {
    // save content
    std::cout << " dummy sava content" << std::endl;
  }
}

int main(int argc, char* argv[]) {
  File file;
  file.setRead();
  std::cout << "readMode " << file.isRead() << std::endl; 
  std::cout << "writeMode " << file.isWrite() << std::endl; 
  file.setWrite();
  std::cout << "readMode " << file.isRead() << std::endl;
  std::cout << "writeMOde " << file.isWrite() << std::endl;
  file.write();
  file.close();
  return 0;
}
