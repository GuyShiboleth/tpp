#include <new>
#include <iostream>
#include "Miktze.h"

using std::size_t;
using std::bad_alloc;
using std::cout;
using std::endl;

/*
* Creates a allocated memory node based on new allocated memory information
* 
* @param allocated The location of the new allocated memory
* @param count The size of the new allocated memory
*
* @return The created node
*/
static memoryAllocationNode* createNewNode(void* allocated, size_t count);

/*
* Gets the last node in the allocations list
*
* @param newNode The new node to add to the list
*/
static void addNodeToList(memoryAllocationNode* newNode);

/*
* Gets the last node in the allocations list
*
* @return The last node in the allocation list
*/
static memoryAllocationNode* getLastNodeInList();

memoryAllocationNode* head_g = nullptr;

void* operator new(size_t count) {
	void* allocated = malloc(count);

	if (nullptr == allocated) {
		throw bad_alloc();
	}

	memoryAllocationNode* newNode = createNewNode(allocated, count);
	addNodeToList(newNode);

	return allocated;
}

void operator delete(void* ptr) noexcept {
	if (nullptr != ptr) {
		free(ptr);
	}

	memoryAllocationNode* nodeToFree = nullptr;

	if (nullptr == head_g) {
		return;
	} else if (head_g->m_memoryLocation == ptr) {
		nodeToFree = head_g;
		head_g = head_g->m_next;
		free(nodeToFree);
		return;
	}

	memoryAllocationNode* iteratorNode = head_g;
	while (nullptr != iteratorNode->m_next) {
		if (iteratorNode->m_next->m_memoryLocation == ptr) {
			nodeToFree = iteratorNode->m_next;
			iteratorNode->m_next = iteratorNode->m_next->m_next;
			free(nodeToFree);
			break;
		}
		iteratorNode = iteratorNode->m_next;
	}
}

void printAllocatedMemory() {
	memoryAllocationNode* nodeIterator = head_g;
	cout << "Current memory allocation status:" << endl;

	if (nullptr == nodeIterator) {
		cout << "No memory allocated" << endl;
	} else {
		while (nullptr != nodeIterator) {
			cout << nodeIterator->m_size << " bytes allocated in position " << nodeIterator->m_memoryLocation << " in the memory" << endl;
			nodeIterator = nodeIterator->m_next;
		}
	}
}

static memoryAllocationNode* createNewNode(void* allocated, size_t count) {
	memoryAllocationNode* newNode = static_cast<memoryAllocationNode*>(malloc(sizeof(memoryAllocationNode)));
	if (nullptr == newNode) {
		throw bad_alloc();
	}
	*newNode = memoryAllocationNode(count, allocated, nullptr);
	return newNode;
}

static void addNodeToList(memoryAllocationNode* newNode) {
	memoryAllocationNode* currentLastNode = getLastNodeInList();
	if (nullptr == currentLastNode) {
		head_g = newNode;
	} else {
		currentLastNode->m_next = newNode;
	}
}

static memoryAllocationNode* getLastNodeInList() {
	memoryAllocationNode* lastNode = head_g;
	if (nullptr == lastNode) {
		return lastNode;
	}

	while (lastNode->m_next) {
		lastNode = lastNode->m_next;
	}

	return lastNode;
}

static void freeNextNode(memoryAllocationNode* nodeToFreeNextOf) {

}