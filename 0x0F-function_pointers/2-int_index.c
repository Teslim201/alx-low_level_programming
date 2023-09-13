#include "function_pointers.h"

/**
*int_index - a program that searches for an integer
*@cmp: pointer to the function to be used to compare values
*@size: number of elements in the array
*@array: input
*Return:index of the first element for which the cmp function does
*not return 0 If no element matches, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (t = 0; t < size; t++)
			if (cmp(array[t]) != 0)
				return (t);
	}
	return (-1);
}
