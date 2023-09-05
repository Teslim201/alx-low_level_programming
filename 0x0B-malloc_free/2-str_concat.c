#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int t, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = ci = 0;
	while (s1[t] != '\0')
		t++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (t + ci + 1));

	if (conct == NULL)
		return (NULL);
	t = ci = 0;
	while (s1[t] != '\0')
	{
		conct[t] = s1[t];
		t++;
	}

	while (s2[ci] != '\0')
	{
		conct[t] = s2[ci];
		t++, ci++;
	}
	conct[t] = '\0';
	return (conct);
}
