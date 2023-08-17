#include "main.h"
#include <stdio.h>

/**
*print_square - prints a square
*@size: the size of the square
*Return: void
*/

void print_square(int size)
{
	int l, d;

	if (size <= 0)
		_putchar('\n');

	for (l = 0; l < size; l++)
	{
		for (d = 0; d < (size); d++)
		{
			_putchar('#');
		}
			_putchar('\n');
		}
}
