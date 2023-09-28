#include "main.h"

/**
 * set_bit - this sets the value of a bit to 1.
 * at any given index.
 * @n: this is pointer of an unsigned long int.
 * @index: this is the index of the bit.
 *
 * Return: 1 if works, -1 if doesn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);

	return (1);

