#pragma once

#include <string>

using std::string;

class DivisionByZeroException {
public:
	static string m_message;
};

class InvalidActionException {
public:
	static string m_message;
};