#include "main.h"

/**
 * print_diagonal - Draws a diagonal line to stdout
 * @n: Number of times to print '\'
 *
 * Return: No return value
 */
void print_diagonal(int n)
{
	int j, l;

	if (!(n <= 0))
	{
		for (j = 0; j < n; j++)
		{
			for (l = 0; l <= j; l++)
			{
				if (l == j)
					_putchar('\\');
				else
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
