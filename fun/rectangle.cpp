#include <iostream>

using namespace std;

int main() {
  unsigned a, b;
  const char symbol{'@'};
  cout << "Enter length and width: ";
  cin >> a >> b;

  for (int j = 1; j <= a; j++) {
    for (int i = 1; i <= b; i++) {
      cout << symbol;
    }
    cout << endl;
  }
}