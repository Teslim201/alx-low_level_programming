#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that assigns a random number.
 * Return: Always return 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
