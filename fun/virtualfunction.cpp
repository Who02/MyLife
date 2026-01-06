#include <iostream>

class animal{
    std::string name_;
    double weight_;

    public:
    animal(std::string name, double weight){
        name_ = name;
        weight_ = weight;
    }

    void print() const {
        std::cout << "name: " << name_ << "\t weight: " << weight_ << "\t";
    }    

    virtual void makesound(std::string sound) const {
        std::cout << "sound: " << sound;
    }
};

struct cat : public animal{
    cat(std::string name, double weight) : animal(name, weight){}

    virtual void makesound(std::string sound) const override {
       std::cout << "sound: " << sound;
    }
};

struct dog : public animal{
    dog(std::string name, double weight) : animal(name, weight){}

    virtual void makesound(std::string sound) const override {
       std::cout << "sound: " << sound;
    }
};

int main(){
    animal animal{"ani", 10};
    animal.print();
    animal.makesound("i am animal");

    std::cout << std::endl;

    cat cat{"cat", 10};
    cat.print();
    cat.makesound("i am cat");

    std::cout << std::endl;
    
    dog dog{"dog", 10};
    dog.print();
    dog.makesound("i am dog");
}