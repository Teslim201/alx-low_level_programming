#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that assigns a random number.
 * Return: Always return 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
