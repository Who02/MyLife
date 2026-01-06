#include <iostream>

using namespace std;

int fact(unsigned number){
    if(number==0){
        return 1;
    }

      if(number==1){
        return 1;
    }

     return number*fact(number-1);

   
};

int main(){
    cout << fact(5);
}