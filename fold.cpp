#include <iostream>

#define MAX_MULTIPLIER (11)

int main() {
	std::cout << "   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11|" << std::endl;
	std::cout << "   ---------------------------------------------" << std::endl;
	for (size_t i = 1; i <= MAX_MULTIPLIER; i++) {
		std::cout << i << (i > 9 ? " " : "  ");
		for (size_t j = 1; j <= MAX_MULTIPLIER; j++) {
			std::cout << "|";
			int product = i * j;
			if (product < 10) {
				std::cout << " " << product << " ";
			} else if (product < 100) {
				std::cout << " " << product;
			} else {
				std::cout << product;
			}
		}
		std::cout << std::endl;
	}
}
