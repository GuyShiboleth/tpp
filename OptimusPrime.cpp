#include <iostream>

bool is_prime(int num) {
	if (num < 2) {
		return false;
	}

	int max_possible_divider = static_cast<int>(std::sqrt(num));
	for (size_t i = 2; i <= max_possible_divider; i++) {
		if (num % i == 0) {
			return true;
		}
	}
}


int main() {
	is_prime(3);
}