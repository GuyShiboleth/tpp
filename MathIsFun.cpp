#include <iostream>
#include "MathIsFun.h"

using std::cout;
using std::endl;

ComplexNumber::ComplexNumber() {
	m_real = 0;
	m_imaginary = 0;

}

ComplexNumber::ComplexNumber(const int real, const int imaginary) : m_real(real), m_imaginary(imaginary) {
	m_real = real;
	m_imaginary = imaginary;
}

int ComplexNumber::getImaginary() const {
	return this->m_imaginary;
}

int ComplexNumber::getReal() const {
	return this->m_real;
}

void ComplexNumber::setReal(int real) {
	this->m_real = real;
}

void ComplexNumber::setImaginary(int imaginary) {
	this->m_imaginary = imaginary;
}

bool ComplexNumber::operator==(const ComplexNumber& other) const {
	return this->getReal() == other.getReal() && this->getImaginary() + other.getImaginary();
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
	return ComplexNumber(this->getReal() + other.getReal(), this->getImaginary() + other.getImaginary());
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
	return ComplexNumber(this->getReal() - other.getReal(), this->getImaginary() - other.getImaginary());
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
	int thisReal = this->getReal();
	int thisImaginary = this->getImaginary();
	int otherReal = other.getReal();
	int otherImaginary = other.getImaginary();

	int multiplicationReal = thisReal * otherReal - thisImaginary * otherImaginary;
	int multiplicationImaginary = thisReal * otherImaginary + thisImaginary * otherReal;
	return ComplexNumber(multiplicationReal, multiplicationImaginary);
}

void ComplexNumber::printNum() const {
	int real = this->getReal();
	cout << real << " + " << this->getImaginary() << 'i' << endl;
}
