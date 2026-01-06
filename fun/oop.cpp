#include <iostream>

class animal{
    std::string name_;
    unsigned weight_;

    public:
   
    animal(std::string name, unsigned weight){
        name_ = name;
        weight_ = weight;
    }

    void print(){
        std::cout << name_ << " weight " << weight_ << " kg" << std::endl;
    }
};

class cat : public animal{
    public:
    cat(std::string name, unsigned weight): animal{name, weight} {}
};

class dog : public animal{
    public:
    dog(std::string name, unsigned weight): animal{name, weight} {}
};

int main(){
    cat bob{"bob", 9};
    dog skebob{"skebob", 15};
    bob.print();
    skebob.print();
}