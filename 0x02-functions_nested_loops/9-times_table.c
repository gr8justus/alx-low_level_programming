#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: nothing
*/
void times_table(void)
{
	int base_num, multiplier, product;

	for (base_num = MIN; base_num <= MAX; base_num++)
	{
		for (multiplier = MIN; multiplier <= MAX; multiplier++)
		{
			product = base_num * multiplier;

			if (product <= MAX)
			{
				if (multiplier != MIN)
					_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (multiplier != MAX)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
