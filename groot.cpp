#include <iostream>

#define VALID_EXIT_CODE (0)
#define INVALID_INPUT_EXIT_CODE (1)

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

/**
* Gets a positive number from the user
*
* :return: The number the user inputted or 0 if the input was invalid
*/
int getPositiveNum();

/**
* Gets a number and prints it's square root
*
* :return: An exit code determining if there was an error or not
*/
int printSquareRoot(int num);

int main() {
	int num = getPositiveNum();
	return 0 == num ? INVALID_INPUT_EXIT_CODE : printSquareRoot(num);
}

int getPositiveNum() {
	double num = 0;

	cout << "Enter a number to get the square root of: ";
	cin >> num;

	if (num <= 0) {
		cout << "Invalid input, input needs to a positive number" << endl;
		return 0;
	}

	return num;
}

int printSquareRoot(int num) {
	if (num < 0) {
		cout << "Can't get the square root of a negative number" << endl;
		return INVALID_INPUT_EXIT_CODE;
	}

	double squareRoot = sqrt(num);
	cout << squareRoot << endl;

	return VALID_EXIT_CODE;
}