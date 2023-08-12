#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that assigns a random number.
 * Return: Always return 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
