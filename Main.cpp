#include <exception>
#include <iostream>
#include "Calculator.h"
#include "CustomErrors.h"

#define VALID_EXIT_CODE (0)
#define INVALID_EXIT_CODE (1)

using std::cout;
using std::endl;
using std::cerr;
using std::exception;

int main(void) {
	try {
		Calculator calc;
		cout << calc.add(3, 54) << endl;
		cout << calc.subtract(54, 33) << endl;
		cout << calc.multiply(5, 4) << endl;
		cout << calc.divide(54, 27) << endl;
		cout << calc.calculate(3, '+', 4) << endl;
		cout << calc.calculate(3, 'a', 1) << endl;
		cout << calc.calculate(3, '/', 0) << endl;
		return VALID_EXIT_CODE;
	} catch (exception& e) {
		cerr << e.what();
		return INVALID_EXIT_CODE;
	}
}