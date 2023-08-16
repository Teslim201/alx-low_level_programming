#include "main.h"

/**
 * _abs - This computes the absolute value of an interger
 * @j: the interger for the computing
 * Return: The absolute value of the interger.
 */

int _abs(int j)
{
	if (j < 0)
		return (-j);
	else if (j >= 0)
	{
		return (j);
	}
	return (0);
}
