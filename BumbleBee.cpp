#include <iostream>
#include <vector>
#include "OptimusPrime.h"

#define VALID_EXIT_CODE (0)
#define INVALID_EXIT_CODE (1)

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int getPositiveNum(unsigned int* inputNum) {
	int num = 0;
	cout << "Enter a number of primary numbers to get:" << endl;
	cin >> num;

	if (cin.fail() || num < 0) {
		cout << "Invalid input, input needs to a positive number" << endl;
		return INVALID_EXIT_CODE;
	}
	*inputNum = num;

	return VALID_EXIT_CODE;
}

void getPrimaryNumbers(vector<int> *primaryNumbers, unsigned numOfPrimaryNumbers) {
	unsigned primaryNumbersAdded = 0;

	for (int i = 2;; i++) {
		if (isPrime(i)) {
			(*primaryNumbers)[primaryNumbersAdded] = i;
			primaryNumbersAdded++;
			if (primaryNumbersAdded == numOfPrimaryNumbers) {
				return;
			}
		}
	}
}

int main(void) {
	unsigned int numOfPrimaryNumbers = 0;
	int getPositiveNumResult = getPositiveNum(&numOfPrimaryNumbers);
	if (VALID_EXIT_CODE != getPositiveNumResult) {
		return getPositiveNumResult;
	}

	vector<int> primaryNumbers(numOfPrimaryNumbers);
	getPrimaryNumbers(&primaryNumbers, numOfPrimaryNumbers);
}