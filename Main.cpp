#include <iostream>
#include "BumbleBee.h"

using std::cout;
using std::endl;

int main(void) {
	unsigned int numOfPrimaryNumbers = 0;
	int getPositiveNumResult = getPositiveNum(&numOfPrimaryNumbers);
	if (BUMBLEBEE_VALID_EXIT_CODE != getPositiveNumResult) {
		return getPositiveNumResult;
	}

	vector<int> primaryNumbers(numOfPrimaryNumbers);
	getPrimaryNumbers(&primaryNumbers, numOfPrimaryNumbers);

	// To make the result visual
	cout << "Here are " << numOfPrimaryNumbers << " primary numbers:" << endl;
	for (size_t i = 0; i < numOfPrimaryNumbers; i++) {
		cout << primaryNumbers[i] << endl;
	}

	return getPositiveNumResult;
}