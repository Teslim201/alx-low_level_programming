#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that assigns a random number.
 * Return: Always return 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
