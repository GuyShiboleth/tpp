#pragma once

class Calculator {
public:
	/*
	* Add two numbers
	* 
	* @param num1: The first number to add
	* @param num2: The second number to add
	* 
	* @return: The sum of the two numbers
	*/
	double add(double num1, double num2);
	
	/*
	* Subtract one number by the other
	*
	* @param num1: The number to subtract from
	* @param num2: The number to subtract
	*
	* @return: The difference of the two numbers
	*/
	double subtract(double num1, double num2);
	
	/*
	* Multiply two numbers
	*
	* @param num1: The first number to multiply
	* @param num2: The second number to multiply
	*
	* @return: The product of the two numbers
	*/
	double multiply(double num1, double num2);
	
	/*
	* Divide one number by the other
	*
	* @param numerator: The number to divide
	* @param denominator: The number to divide by
	*
	* @return: The sum of the two numbers
	*/
	double divide(double numerator, double denominator);
	
	/*
	* Perform a calculation on 2 numbers
	*
	* @param num1: The first number to perform the calculation on
	* @param action: The action to perform
	* @param num2: The second number to perform the calculation on
	*
	* @return: The result of the calculation of the two numbers
	*/
	double calculate(double num1, char action, double num2);
};