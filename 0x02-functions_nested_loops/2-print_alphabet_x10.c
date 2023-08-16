#include "main.h"

/**
 * print_alphabet_x10 - make alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char t;

	for (i = 0 ; i < 10 ; i++)
	{
		for (t = 'a' ; t <= 'z' ; t++)
		_putchar(t);
		_putchar('\n');
	}
}
