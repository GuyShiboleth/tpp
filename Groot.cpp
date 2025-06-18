#include <iostream>
#include "Groot.h"

#define VALID_EXIT_CODE (0)
#define INVALID_INPUT_EXIT_CODE (1)

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;
using std::cerr;

int getPositiveNum() {
	int num = 0;

	cout << "Enter a number to get the square root of:" << endl;
	cin >> num;

	if (num < 0) {
		cout << "Invalid input, input needs to a positive number" << endl;
		return 0;
	}

	return num;

}

int main() {
	int num = getPositiveNum();
	if (0 == num) {
		return INVALID_INPUT_EXIT_CODE;
	}

	double squareRoot = sqrt(num);
	cout << squareRoot << endl;

	return VALID_EXIT_CODE;
}
