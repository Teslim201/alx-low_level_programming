#include "main.h"

/**
 * jack_bauer - Printing every minute of the day
 * Jack Bauer, Starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int m, u;

	for (m = 0; m < 24; m++)
	{
		for (u = 0; u < 60; u++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(u / 10 + '0');
			_putchar(u % 10 + '0');
			_putchar('\n');

		}
	}
}
