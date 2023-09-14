#include "variadic_functions.h"

/**
 *print_all - a program that prints anything
 *@format: list of types of arguments passed to the function
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list printall;
	unsigned int t = 0, j, o = 0;
	char *put;
	const char s_arg[] = "cifs";

	va_start(printall, format);
	while (format && format[t])
	{
		j = 0;
		while (s_arg[j])
		{
			if (format[t] == s_arg[j] && o)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[t])
		{
			case 'c':
				printf("%c", va_arg(printall, int)), o = 1;
				break;
			case 'i':
				printf("%d", va_arg(printall, int)), o = 1;
				break;
			case 'f':
				printf("%f", va_arg(printall, double)), o = 1;
				break;
			case 's':
				put = va_arg(printall, char*), o = 1;
				if (!put)
				{
					printf("(nil)");
					break;
				}
				printf("%s", put);
				break;
		} t++;
	}
	printf("\n"), va_end(printall);
}
