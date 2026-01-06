#include <iostream>

using namespace std;

int main(){
    
   double a,b,result;
   unsigned operation;

    cout << "Enter 2 number: ";
    cin >> a >> b;

    cout << "Choise math operation:\n"<<
    "1- +\n"<<
    "2- -\n"<<
    "3- *\n"<<
    "4- /\n"<<
    "Your choise: ";

    cin >> operation;

    switch (operation)
    {
    case 1:
        cout << "a+b=" << a+b;
        break;
    case 2:
        cout << "a-b=" << a-b;
        break; 
    case 3:
        cout << "a*b=" << a*b;
        break;
    case 4:
        cout << "a/b=" << a/b;
        break;
    default:
    cout << "Error";
        break;
    }
}