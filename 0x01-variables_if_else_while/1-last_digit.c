#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description:  This program will assign a random value to the variable n
 * Return: return 0 always (success)
 */


int main(void)
{
	int n;
	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is %d and ", n, last_digit);

	if (last_digit > 5)
	{
	printf("is greater than 5\n");
	}

	else if (last_digit == 0)
	{
	printf("is 0\n");
	}

	else
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
