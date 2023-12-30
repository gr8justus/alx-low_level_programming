#include "main.h"
#include <stdio.h>

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
				_putchar(' ');

			printf("%i", product);

			if (multiplier != MAX)
				printf(", ");
		}
		_putchar('\n');
	}
}
