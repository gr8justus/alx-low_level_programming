#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 - 9 excluding 2 and 4
 *
 * Return: Nothing is returned
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
			_putchar('0' + j);
	}
	_putchar('\n');
}
