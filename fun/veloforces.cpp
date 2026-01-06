#include <iostream>
#include <conio.h>

int main() {
	int size{};

	std::cin >> size;
	unsigned long arr[size];
	for (int i{}; i < size; ++i) {
		std::cin >> arr[i];
	}
	int count{0}, answer{0};
	for (int i{0}; i < size;) {
		for (int j{0}; j < size; ++j) {
			if (arr[j] >= i) {
				count += 1;
			}
		}
		if (count >= i) {
			answer = i;
			count = 0;
		}
        else{
            break;
        }
		i += 1;
	}
	std::cout << answer;
    getch();
}