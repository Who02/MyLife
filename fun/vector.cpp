#include <iostream>
#include <vector>

int main(){
    unsigned count;
    std::cout << "Write count number in vector: ";
    std::cin >> count;

    std::vector<int> numbers;
    int t;
    for(int n=0; n<count; n++){
        std::cout << "enter " << n+1 << " number: ";
        std::cin >> t;
        numbers.push_back(t);
    }    
    
    std::cout << std::endl;

    for(int i{1}; i<=count; ++i){
        std::cout << numbers[count-i] << "\t";
    }
}

