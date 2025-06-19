#include <iostream>
#include <cmath>
#include "Groot.h"

#define VALID_EXIT_CODE (0)
#define INVALID_INPUT_EXIT_CODE (1)

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

int getPositiveNum(unsigned int* inputNum) {
	int num = 0;
	cout << "Enter a number to get the square root of:" << endl;
	cin >> num;

	if (cin.fail() || num < 0) {
		cout << "Invalid input, input needs to a positive number" << endl;
		return INVALID_INPUT_EXIT_CODE;
	}
	*inputNum = num;

	return VALID_EXIT_CODE;
}

int main() {
	unsigned int num = 0;
	int getPositiveNumExitCode = getPositiveNum(&num);
	if (getPositiveNumExitCode != VALID_EXIT_CODE) {
		return getPositiveNumExitCode;
	}

	double squareRoot = sqrt(num);
	cout << squareRoot << endl;

	return getPositiveNumExitCode;
}
