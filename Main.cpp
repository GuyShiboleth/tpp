#include "MathIsFun.h"

int main() {
	ComplexNumber comp1;
	ComplexNumber comp2(3, 3);
	ComplexNumber comp3(-1, 3);

	comp1.printNum();
	comp2.printNum();
	comp3.printNum();
	comp3.setImaginary(4);
	comp3.setReal(-2);
	comp3.printNum();

	(comp2 + comp3).printNum();
	(comp2 - comp3).printNum();
	(comp2 * comp3).printNum();
}