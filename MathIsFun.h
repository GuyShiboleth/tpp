#pragma once

class ComplexNumber {
public:
	// Constructor that sets the number to 0
	ComplexNumber();
	// Constructor where you can chose the value
	ComplexNumber(const int real, const int imaginary);

	// Getters of the class attributes
	int getReal() const;
	int getImaginary() const;
	
	// Setters of the class attributes
	void setReal(int real);
	void setImaginary(int imaginary);

	// Set usage of the operators ==, +, -, *
	bool operator==(const ComplexNumber& other) const;
	ComplexNumber operator+(const ComplexNumber& other) const;
	ComplexNumber operator-(const ComplexNumber& other) const;
	ComplexNumber operator*(const ComplexNumber& other) const;

	// Prints the complex number
	void printNum() const;

private:
	int m_real;
	int m_imaginary;
};