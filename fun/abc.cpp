#include <iostream>

class String {
  public:
    String(const char* str, int size) : size_(size) {
        str_ = new char[size];
        for(int i = 0; i < size; ++i) {
            str_[i] = str[i];
        }
    }

      String(const String& other) : size_(other.size_) {
        str_ = new char[size_];
        for (int i = 0; i < size_; ++i) {
            str_[i] = other.str_[i];
        }
    } 

    ~String() {
        delete[] str_;
    }

    // Методы для доступа к данным
    const char* data() const {
        return str_;
    }
    int size() const {
        return size_;
    }

  private:
    char* str_;
    int size_;
};

// Перегрузка оператора вывода
std::ostream& operator<<(std::ostream& os, const String& s) {
    for(int i = 0; i < s.size(); ++i) {
        os << s.data()[i];
    }
    return os;
}

int main() {
    String s = String("abc", 3);
    String s1 = s ;
    
    
    std::cout << s << std::endl << s1 ;
    
    
    return 0;
}