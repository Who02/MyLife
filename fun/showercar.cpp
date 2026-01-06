#include <iostream>

int main() {
	int x, y, z, t, v, min;
	std::cin >> x >> y >> z >> t >> v;

	min = x;
	if (y * t < x) {
		min = y * t;
	}

	if (z * v < x) {
		min = z * v;
	}
	std::cout << min;
    
}