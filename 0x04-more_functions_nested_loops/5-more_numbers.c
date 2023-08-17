#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int t, m;

	for (t = 1; t <= 10; t++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
