#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int t;
	int j;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[t] = src[j];
		t++;
		j++;
	}
	dest[t] = '\0';
	return (dest);
}
