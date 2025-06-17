#include <iostream>

bool isPrime(int num) {
	if (num < 2) {
		return false;
	}

	int maxPossibleDivider = static_cast<int>(std::sqrt(num));
	for (size_t i = 2; i <= maxPossibleDivider; i++) {
		if (num % i == 0) {
			return false;
		}
	}
}


int main() {
	std::cout << (isPrime(5) ? "True" : "False") << std::endl;
}