#pragma once

#include <exception>
#include <string>

class DivisionByZeroException : public std::exception {
public:
	DivisionByZeroException(std::string error) : m_error{ error } {};

	const char* what() const noexcept override { return m_error.c_str(); }

private:
	std::string m_error{};
};

class InvalidActionException: public std::exception {
public:
	InvalidActionException(std::string error) : m_error{ error } {};
	
	const char* what() const noexcept override { return m_error.c_str(); }

private:
	std::string m_error{};
};