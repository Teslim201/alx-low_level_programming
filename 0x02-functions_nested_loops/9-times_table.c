#include "main.h"
#include <stdio.h>

/**
 * times_table - Printing the 9 times table, starting with 0.
 */

void times_table(void)
{
	int m, s, result;

	for (m = 0; m < 10; m++)
	{
		for (s = 0; s < 10; s++)
		{
			result = m * s;
			if (s == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (s != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
