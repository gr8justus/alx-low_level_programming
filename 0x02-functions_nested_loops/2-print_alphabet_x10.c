#include "main.h"

/**
 * print_alphabet_x10 - Writes the alphabet to stdout 10 times
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int l = 97;

		while (l < 123)
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		j++;
	}
}
