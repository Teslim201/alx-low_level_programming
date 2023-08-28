#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int e = 0;
	int j = n;

	for (; e < j; e++)
	{
		dest[e] = src[e];
		n--;
	}
	return (dest);
}
