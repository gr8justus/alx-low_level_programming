#include "main.h"

/**
 * print_line - Draws a straight line to stdout
 * @n: Number of times to print '_'
 *
 * Return: No return value
 */
void print_line(int n)
{
	int j;

	if (!(n <= 0))
		for (j = 0; j < n; j++)
			_putchar('_');

	_putchar('\n');
}
