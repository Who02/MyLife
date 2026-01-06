#include <iostream>

using namespace std;

int main() {
  unsigned a, choise;

  cout << "Choise line:\n 1-vertical.\n 2- horizontal.\n Your choise: ";
  cin >> choise;

  cout << "Enter count of char: ";
  cin >> a;

  switch (choise) {
  case 1:
    for (int i = 0; i < a; ++i) {
      cout << "@\n";
    }
    break;
  case 2:
    for (int i = 0; i < a; ++i) {
      cout << "@";
    }
    break;
  default:
    cout << "Error";
  }
}