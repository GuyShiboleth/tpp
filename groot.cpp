#include <iostream>

#define INVALID_INPUT_EXIT_CODE (0);

int main() {
	double num = 0;

	std::cout << "Enter a number to get the square root of: ";
	std::cin >> num;

	if (num <= 0) {
		std::cout << "Invalid input, input needs to a positive number" << std::endl;
		return INVALID_INPUT_EXIT_CODE;
	}

	double squareRoot = std::sqrt(num);
	std::cout << squareRoot << std::endl;
}