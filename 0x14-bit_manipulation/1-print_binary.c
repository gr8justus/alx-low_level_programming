#include "main.h"

/**
 * print_binary - print binary to stdout
 * @n: number to print in binary
 *
 * Description: prints number to stdout in bimary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, bits, leading_zero = 1;
	unsigned long int bit_shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		/* shifts 00000001 by i */
		bit_shift = 1UL << i;

		if (n & bit_shift)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero || i == 0)
			_putchar('0');
	}
}
