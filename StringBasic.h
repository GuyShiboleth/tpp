#pragma once

class myString {
public:
	// Constructor
	myString(const char string[]);
	// Destructor
	~myString();
	// Copy constructor
	myString(const myString& other);
	// Copy assignment operator
	myString& operator= (const myString& str);
	// For printing
	friend std::ostream& operator<<(std::ostream& out, const myString& s);

private:
	char* m_string{};
};