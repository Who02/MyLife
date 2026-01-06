#include <iostream>

int main() {
	long a, b, c;
	std::cin >> a >> b >> c;
    long answer{0};
    int n = (a + b + c) / 3;

    if(a>= 2*n){
        std::cout << 3*n;
    }
    else if(a%2 == 1 &&(b==0 || c==0)){
        std::cout << a+a/2-1;
    }
    else{
        std::cout << a+a/2;
    }
}