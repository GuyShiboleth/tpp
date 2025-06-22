#include <algorithm>
#include <iostream>

#include "StringBasic.h"

using std::cout;
using std::endl;
using std::copy_n;
using std::ostream;

#define MAX_STRING_SIZE (10000)
#define NO_MEMORY_LEFT_EXIT_CODE (1)
#define STRNLEN_S_NULL_CHAR_NOT_FOUND_RETURN_VAL (0)

myString::myString(const char string[]) {
	m_string = nullptr;
	size_t length = strnlen_s(string, MAX_STRING_SIZE - 1);
	if (length == STRNLEN_S_NULL_CHAR_NOT_FOUND_RETURN_VAL) {
		return;
	}

	m_string = new char[length];

	if (nullptr != m_string) {
		copy_n(string, length + 1, m_string);
	}
}

myString::~myString() {
	delete[] m_string;
	m_string = nullptr;
}

//TODO NEED TO ADJUST THIS BASED ON THE OTHER
myString::myString(const myString& other) {
	if (m_string != nullptr) {
		delete[] m_string;
	}

	m_string = nullptr;
	if (other.m_string == nullptr) {
		return;
	}

	size_t length = strnlen_s(other.m_string, MAX_STRING_SIZE + 1);
	if (length == STRNLEN_S_NULL_CHAR_NOT_FOUND_RETURN_VAL) {
		return;
	}

	m_string = new char[length];

	if (nullptr != m_string) {
		copy_n(other.m_string, length + 1, m_string);
	}
}

myString& myString::operator=(const myString& other) {
	if (m_string != nullptr) {
		char* old_m_string = m_string;
	}

	m_string = nullptr;
	if (other.m_string == nullptr) {
		return *this;
	}

	size_t length = strnlen_s(other.m_string, MAX_STRING_SIZE + 1);
	if (length == STRNLEN_S_NULL_CHAR_NOT_FOUND_RETURN_VAL) {
		return *this;
	}

	m_string = new char[length];

	if (nullptr != m_string) {
		copy_n(other.m_string, length + 1, m_string);
	}

	return *this;
}

ostream& operator<<(ostream& out, const myString& s) {
	out << s.m_string;
	return out;
}

int main() {
	myString test = "this is a test";
	cout << test << endl; 
	test = "this is also a test";
	cout << test << endl;

	return 0;
}