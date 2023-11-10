#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all parameters
 * @n: First parameter
 * @...: Variadic arguments
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ints;
	int sum;
	unsigned int i;

	if (n <= 0)
		return (0);
	va_start(ints, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ints, int);
	va_end(ints);
	return (sum);
}
