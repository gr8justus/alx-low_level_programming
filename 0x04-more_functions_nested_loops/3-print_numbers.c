#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: Nothing is returned
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		_putchar('0' + j);
	}
	_putchar('\n');
}
