#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers to stdout
 * @separator: String to print between numbers
 * @n: Size of the variadic list
 * @..: Variadic arguments
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int value;

	/* checks if number of argument is 0 or less */
	if (n <= 0)
		return; /* stops function execution */
	va_start(num, n);
	/* iterates the va_list -num */
	for (i = 0; i < n; i++)
	{
		value = va_arg(num, int);
		printf("%i", value);

		/*
		 * checks if separator is not null, and if the number of arg is
		 * less than 1
		 */
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(num);
}
