#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: number of times table
 *
 * Return: nothing
*/
void print_times_table(int n)
{
	int base_num, multiplier, product;

	if (n < 0 || n > 15)
		return;

	for (base_num = MIN; base_num <= n; base_num++)
	{
		for (multiplier = MIN; multiplier <= n; multiplier++)
		{
			product = base_num * multiplier;

			if (product <= MAX) /* prints a digit product */
			{
				if (multiplier != MIN)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else if (product <= 99) /* prints 2 digit product */
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else /* prints 3 digits product */
			{
				_putchar(product / 100 + '0');
				_putchar((product % 100) / 10 + '0');
				_putchar((product % 100) % 10 + '0');
			}
			if (multiplier != n) /* format table for readability */
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
