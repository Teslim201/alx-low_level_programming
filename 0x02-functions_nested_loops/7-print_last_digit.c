#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @m: function parameter
 * Return: g
 */

int print_last_digit(int m)
{
	int g;
		g = m % 10;
	if (m < 0)
		g = -g;
	_putchar(g + '0');
	return (g);

}
