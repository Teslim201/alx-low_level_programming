
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int t, g, s = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (g = 0; av[t][g]; g++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
	for (g = 0; av[t][g]; g++)
	{
		str[s] = av[t][g];
		s++;
	}
	if (str[s] == '\0')
	{
		str[s++] = '\n';
	}
	}
	return (str);
}
