#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: List of arguments
 * @...: Variadic arguments
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	if (format)
	{
		va_list generic;
		char *separator = ", ";
		int i = 0, len = strlen(format) - 1;

		va_start(generic, format);
		while (i <= len)
		{
			switch (format[i])
			{
				case 'c':
					print_char(generic, separator);
					break;
				case 'i':
					print_int(generic, separator);
					break;
				case 'f':
					print_float(generic, separator);
					break;
				case 's':
					print_str(generic, separator);
					break;
			}
			i++;
			separator = (i < len) ? ", " : "";
		}
		va_end(generic);
	}
	putchar('\n');
}

/**
 * print_char - prints a char
 * @ap: variadic argument
 * @separator: Separates printed arguments
 *
 * Return: Nothing.
 */
void print_char(va_list ap, char *separator)
{
	char s = va_arg(ap, int);

	printf("%c%s", s, separator);
}

/**
 * print_int - prints an integer
 * @ap: variadic argument
 * @separator: Separates printed arguments
 *
 * Return: Nothing.
 */
void print_int(va_list ap, char *separator)
{
	int num = va_arg(ap, int);

	printf("%i%s", num, separator);
}

/**
 * print_float - prints a float
 * @ap: variadic argument
 * @separator: Separates printed arguments
 *
 * Return: Nothing.
 */
void print_float(va_list ap, char *separator)
{
	float n = va_arg(ap, double);

	printf("%f%s", n, separator);
}

/**
 * print_str - prints a string
 * @ap: variadic argument
 * @separator: Separates printed arguments
 *
 * Return: Nothing.
 */
void print_str(va_list ap, char *separator)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", str, separator);
}
