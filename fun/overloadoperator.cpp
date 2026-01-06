#include <iostream>

class Integer {
public:
	Integer(double n) {
		value = n;
	}

	void print() const {
		std::cout << "value: " << value << std::endl;
	}

private:
	double value;
};