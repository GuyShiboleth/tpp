#include "Calculator.h"
#include "Errors.h"

double Calculator::add(double num1, double num2) {
	return num1 + num2;
}

double Calculator::subtract(double num1, double num2) {
	return num1 - num2;
}

double Calculator::multiply(double num1, double num2) {
	return num1 * num2;
}

double Calculator::divide(double numerator, double denominator) {
	if (denominator == 0) {
		DivisionByZeroException err;
		throw err;
	}
	
	return numerator / denominator;
}

double Calculator::calculate(double num1, char action, double num2) {
	switch (action) {
	case '+':
		return this->add(num1, num2);
		break;
	case '-':
		return this->subtract(num1, num2);
		break;
	case '*':
		return this->multiply(num1, num2);
		break;
	case '/':
		return this->divide(num1, num2);
		break;
	default:
		InvalidActionException err;
		throw err;
	}
}