#include <iostream>
#include "Calculator.h"

using std::cout;
using std::endl;

int main(void) {
	Calculator calc;
	cout << calc.add(3, 54) << endl;
	cout << calc.subtract(54, 33) << endl;
	cout << calc.multiply(5, 4) << endl;
	cout << calc.divide(54, 27) << endl;
	cout << calc.calculate(3, '+', 4) << endl;
	cout << calc.calculate(3, '*', 3) << endl;
}