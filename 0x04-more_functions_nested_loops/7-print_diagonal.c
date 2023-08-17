#include "main.h"

/**
*print_diagonal - Write a function that draws a diagonal line
*@n: the number of times the character ...
*Return: void
*/

void print_diagonal(int n)
{
	int v, t;

	if (n <= 0)
		_putchar('\n');
	for (v = 0; v < n; v++)
	{
		for (t = 0; t < v; t++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
