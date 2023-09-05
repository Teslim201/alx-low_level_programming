#include "main.h"
#include <stdio.h>

/**
 * create_array - create array of size and design char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		str[t] = c;
	return (str);
}
