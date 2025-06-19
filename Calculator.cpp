#include "Calculator.h"
#include "CustomErrors.h"

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
		throw DivisionByZeroException("Can't divide a number by zero");
	}
	
	return numerator / denominator;
}

double Calculator::calculate(double num1, char action, double num2) {
	switch (action) {
	case '+':
		return add(num1, num2);
		break;
	case '-':
		return subtract(num1, num2);
		break;
	case '*':
		return multiply(num1, num2);
		break;
	case '/':
		return divide(num1, num2);
		break;
	default:
		throw InvalidActionException("Tried to input an invalid operator");
	}
}