#include <iostream>

using namespace std;

int main() {

  unsigned size{};
  cout << "enter size array: ";
  cin >> size;

  int array[size];

  for (int i = 0; i < size; i++) {
    cout << "enter " << i + 1 << " element in array: ";
    cin >> array[i];
  }

  for (int j = size - 1; j >= 0; j--) {
    cout << array[j] << ',' << " ";
  }
}