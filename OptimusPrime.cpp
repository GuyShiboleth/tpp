#include <iostream>

#define VALID_EXIT_CODE (0)
#define INVALID_EXIT_CODE (1)

using std::sqrt;
using std::endl;
using std::cout;

/*
* Checks if a number is prime
*
* :param[IN] num: The number to check if it's
* :param[OUT] num: A boolean value indicating if the input is prime, if the input is invalid
*
* :return: A status code indicating if there was an error with the function
*/
int isPrime(int num, bool* primeStatus);

int main() {
	bool primeStatus = false;
	int isPrimeStatusCode = VALID_EXIT_CODE;
	
	isPrimeStatusCode = isPrime(47, &primeStatus);
	cout << (primeStatus ? "True" : "False") << endl;

	return isPrimeStatusCode;
}

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

