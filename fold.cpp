#include <iostream>
#include <iomanip>

#define MAX_MULTIPLIER (11)

using std::cout;
using std::endl;
using std::setw;
using std::left;


int main() {
	cout << "   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |10 |11 " << endl;
	cout << "   --------------------------------------------" << endl;
	
	for (size_t i = 1; i <= MAX_MULTIPLIER; i++) {
		cout << setw(3) << left << i;
		for (size_t j = 1; j <= MAX_MULTIPLIER; j++) {
			cout << "|" << setw(3) << i * j;
		}
		cout << endl;
	}
}
