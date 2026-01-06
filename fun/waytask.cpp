#include <iostream>
#include <conio.h>

int main(){
    int x,y,x_r{},y_r{};
    std::cin >> x >> y;
    std::cout << std::endl;

    for(int i{0}; i<x;){
        for(int j{0}; j<y;){
            if(j!=y){ 
                j+=1;
                y_r+=1;
                std::cout << x_r << " " << y_r << std::endl;
            }
            else if(i!=x){
                j-=1;
                y_r-=1;
                std::cout << x_r << " " << y_r << std::endl;
            }
            else{}
            if(i!=x){
                i+=1;
                x_r+=1;
                std::cout << x_r << " " << y_r << std::endl;
            }
            else if(j!=y){
                i-=1;
                x_r-=1;
                std::cout << x_r << " " << y_r << std::endl;
            }
            else{}
        }
    }
    getch();
}