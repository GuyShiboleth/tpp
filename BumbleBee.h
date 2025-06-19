#pragma once

#include <vector>

#define BUMBLEBEE_VALID_EXIT_CODE (0)
#define BUMBLEBEE_INVALID_EXIT_CODE (1)

using std::vector;

/*
* Gets a positive number from the user
* 
* @param[in] The number to user inputted
* 
* @return An exit code indicating if there was an error in the function
*/
int getPositiveNum(unsigned int* inputNum);

/*
* Fills a list with a wanted amount of primary numbers
* 
* @param[In] primaryNumbers: The list of primary numbers to fill
* @param[Out] numOfPrimaryNumbers: The amount of primary numbers to get
*/
void getPrimaryNumbers(vector<int>* primaryNumbers, unsigned numOfPrimaryNumbers);