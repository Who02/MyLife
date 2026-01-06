#include <iostream>

using namespace std;

int main (){
    int a,b;
    int result = 0;
    cout << "Enter low and high limit: ";
    cin >> a >> b;
    if (a > b) swap(a, b);

    for(int i = a; i<b; i++){
        if(i%2 != 0){
            result+=i;
        }
    }
    cout << "Sum odd number = " << result;
}