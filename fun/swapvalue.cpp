#include <iostream>
#include <ctime>

template <typename A>

void swap(A &a, A  &b){

    A temp = a;
    a = b;
    b = temp;
    
}

template <typename B, typename C>

void swap(B &a, C &b){
 
    B temp = a;
    a = b;
    b = temp;
    
}



int main(){
     srand(time(NULL));
    
    int a = rand()%100;
    int b = rand()%100;

    std::cout << "Value a = " << a << std::endl << "Value b = " << b << std::endl;
    
    swap(a,b);

    std::cout << "Swap was made." << std::endl <<  "Value a = " << a << std::endl << "Value b = " << b << std::endl;

    char s = '&';
    double d = 5.89;
    std::cout << "s = " << s << std::endl  << "d = " << d << std::endl;

    swap(s,d);

    std::cout <<"swap was made" << std::endl << "s = " << s << std::endl  << "d = " << d << std::endl;
}