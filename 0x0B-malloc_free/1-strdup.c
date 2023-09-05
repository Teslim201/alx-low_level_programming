#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ttt;
	int j, h = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	ttt = malloc(sizeof(char) * (j + 1));

	if (ttt == NULL)
		return (NULL);

	for (h = 0; str[h]; h++)
		ttt[h] = str[h];

	return (ttt);
}
