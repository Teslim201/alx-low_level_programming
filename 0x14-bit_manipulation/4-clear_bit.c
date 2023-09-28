#include "main.h"

/**
 * clear_bit - this sets the value of a bit to 0.
 * at any given index.
 * @n: this is the pointer of an unsigned long int.
 * @index: this is the index of the bit.
 *
 * Return: 1 if this works, -1 if this doesn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
