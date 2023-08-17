#include <stdio.h>
#include "main.h"

/**
*main - program that finds and prints the largest prime
*factor of the number 612852475143
*Return: Always 0.
*/

int main(void)
{
	unsigned long int u, n = 612852475143;

	for (u = 3; u < 782849; u = u + 2)
	{
		while ((n % u == 0) && (n != u))
			n = n / u;
	}
		printf("%lu\n", n);
		return (0);
}
