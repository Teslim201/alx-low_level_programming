#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s, h;

		for (s = 1; s <= size; s++)
		{
			for (h = s; h < size; h++)
			{
				_putchar(' ');
			}
			for (h = 1; h <= s; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
