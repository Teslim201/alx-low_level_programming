#include <stdio.h>

/**
 * print_message - This is a function that Prints
 *
 * Return: this Always returns void
 */

/* This is Function to be executed before main */
void __attribute__((constructor))print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
