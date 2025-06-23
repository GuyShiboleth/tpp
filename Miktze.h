#pragma once

#include <cstdlib>

class memoryAllocationNode {
public:
	std::size_t m_size;
	void* m_memoryLocation;
	memoryAllocationNode* m_next;

	// Constructor
	memoryAllocationNode(std::size_t size, void* memoryLocation, memoryAllocationNode* next) :
		m_size(size), m_memoryLocation(memoryLocation), m_next(next) {};
};

// Override of the new operator
void* operator new(size_t count);

// Override of the delete operator
void operator delete(void* ptr) noexcept;

// Prints all the allocated memory in a program
void printAllocatedMemory();