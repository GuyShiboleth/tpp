#include <iostream>
#include "OptimusPrime.h"

#define VALID_EXIT_CODE (0)

using std::sqrt;
using std::endl;
using std::cout;

bool isPrime(int num) {
	if (num < 2) {
		return false;
	}

	int maxPossibleDivider = static_cast<int>(sqrt(num));
	for (size_t i = 2; i <= maxPossibleDivider; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	bool primeStatus = isPrime(47);
	cout << (primeStatus ? "True" : "False") << endl;
	primeStatus = isPrime(48);
	cout << (primeStatus ? "True" : "False") << endl;

	return VALID_EXIT_CODE;
}
