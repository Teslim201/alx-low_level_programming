#include "main.h"

/**
 * _isalpha - Checking for char alphabet
 * @c: the character for checking
 * Return:1 if char letter is lower or upper, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
