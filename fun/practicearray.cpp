#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

int main() {
    srand(time(NULL));
    const unsigned size = 10;
    int arr[size];


    // Заполнение массива с проверкой дубликатов
    for (unsigned i = 0; i < size; i++) {
        bool duplicate;
        do {
            duplicate = false;
            arr[i] = rand() % 20;
            
            // Проверка на дубликаты среди уже заполненных элементов
            for (unsigned j = 0; j < i; j++) {
                if (arr[j] == arr[i]) {
                    duplicate = true;
                    break;
                }
            }
        } while (duplicate); // Генерируем новое число, пока есть дубликат
    }

 int number = numeric_limits<int>::max();   

    for(unsigned i = 0; i<size; i++){

        if(arr[i] < number){

            number = arr[i];
        }
    }

    // Вывод результатов
   for (unsigned j = 0; j < size; j++) {
        cout << arr[j] << endl;
    }

    cout << "Lowest number in array: " << number;
}