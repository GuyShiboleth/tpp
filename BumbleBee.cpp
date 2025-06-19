#include <iostream>
#include "Bumblebee.h"
#include "OptimusPrime.h"

using std::cout;
using std::cin;
using std::endl;

int getPositiveNum(unsigned int* inputNum) {
	int num = 0;
	cout << "Enter a number of primary numbers to get:" << endl;
	cin >> num;

	if (cin.fail() || num <= 0) {
		cout << "Invalid input, input needs to a positive number" << endl;
		return BUMBLEBEE_INVALID_EXIT_CODE;
	}
	*inputNum = num;

	return BUMBLEBEE_VALID_EXIT_CODE;
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
