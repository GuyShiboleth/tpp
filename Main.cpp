#include "Miktze.h"

int main() {
	int* test = new int;
	int* test2 = new int(100);
	char* test3 = new char('a');
	double* test4 = new double(300);
	int* test5 = new int(400);
	printAllocatedMemory();
	delete test;
	delete test4;
	int* test6 = new int(500);
	printAllocatedMemory();
}