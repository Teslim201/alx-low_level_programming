#include "main.h"

/**
*_atoi - a program that convert a string to an integer
*@s: the pointer to be converted
*Return: An integer
*/

int _atoi(char *s)
{
	int t = 0;
	unsigned int ab = 0;
	int cba = 1;
	int bsb = 0;

	while (s[t])
	{
		if (s[t] == 45)
		{
			cba *= -1;
		}
		while (s[t] >= 48 && s[t] <= 57)
		{
			bsb = 1;
			ab = (ab * 10) + (s[t] - '0');
			t++;
		}
		if (bsb == 1)
		{
			break;
		}
		t++;
	}
	ab *= cba;
	return (ab);
}
