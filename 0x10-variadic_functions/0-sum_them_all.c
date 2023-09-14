#include "variadic_functions.h"

/**
 *sum_them_all - a function that returns the sum of all its parameters
 *@n: the parameter
 *Return: the integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int t;
	va_list addNumbers;

	va_start(addNumbers, n);

	if (n == 0)
		return (0);
	for (t = 0; t < n; t++)
		sum = sum + va_arg(addNumbers, int);
	va_end(addNumbers);
	return (sum);
}
