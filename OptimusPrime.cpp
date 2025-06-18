#include <iostream>
#include "OptimusPrime.h"

#define VALID_EXIT_CODE (0)
#define INVALID_EXIT_CODE (1)

using std::sqrt;
using std::endl;
using std::cout;

int isPrime(int num, bool* primeStatus) {
	if (num < 2) {
		return INVALID_EXIT_CODE;
	}

	int maxPossibleDivider = static_cast<int>(sqrt(num));
	for (size_t i = 2; i <= maxPossibleDivider; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return VALID_EXIT_CODE;
}

int main() {
	bool primeStatus = false;
	int isPrimeStatusCode = isPrime(47, &primeStatus);
	cout << (primeStatus ? "True" : "False") << endl;

	return isPrimeStatusCode;
}
