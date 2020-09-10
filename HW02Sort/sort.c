// ***
// *** You MUST modify this file, only the ssort function
// ***

#include "sort.h"
#include <stdio.h>

// DO NOT MODIFY THIS FUNCTION
bool checkOrder(int * arr, int size)
// This function returns true if the array elements are
// in the ascending order.
// false, otherwise
{
  int ind;
  for (ind = 0; ind < (size - 1); ind ++)
    {
      if (arr[ind] > arr[ind + 1])
	{
	  return false;
	}
    }
  return true;
}


// YOU MUST MODIFY THIS FUNCTION
#ifdef TEST_SORT
void ssort(int * arr, int size)
{
  // This function has two levels of for
  // The first level specifies which element in the array
  // The second level finds the smallest element among the unsorted
  // elements
  
  // This is the syntax to read or write an array element:
  // int x = arr[4];
  // read the value of arr[4] and store it in x
  // arr[4] = 5;
  // stores 5 in the element arr[4]
  // Please remember that indexes start from 0.
  for (index = 0; index < (size - 1); index++)
    {
      int smallVal = arr[index]; //This sets the value for the current smallest value left to be the first value in the array that has not been sorted
      int smallInd = index; //This sets the index of the smallest array to the first unsorted value
      int compInd = index; //This is the index value that will be compared to the current smallest value
	  
      while(compInd < size)
        {
	  if(smallVal > arr[compInd])
	  {
	    smallVal = arr[compInd];
	    smallInd = compInd;
	  }
	  compInd++;
        }
      tempVal = arr[index];
      arr[index] = smallVal;
      arr[smallInd] = tempVal;
    }
	      
  // After finding the smallest element among the unsorted elements,
  // swap it with the element of the index from the first level
}
#endif
