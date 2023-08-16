#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet- Make the alphabet
 * Return: return void always (sucess)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
