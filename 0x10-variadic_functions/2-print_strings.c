#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings to stdout
 * @separator: String to print between numbers
 * @n: Size of the variadic list
 * @..: Variadic arguments
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str = NULL;

	/* checks if number of argument is 0 or less */
	if (n <= 0)
	{
		putchar('\n');
		return; /* stops function execution */
	}
	va_start(strings, n);
	/* iterates the va_list -num */
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		/*
		 * checks if separator is not null, and if the number of arg is
		 * less than 1
		 */
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(strings);
}
