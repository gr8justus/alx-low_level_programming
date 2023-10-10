#include "main.h"

/**
 * print_alphabet - Writes the alphabet to stdout
 *
 * Return: No return value
 */
void print_alphabet(void)
{
	int j = 97;

	while (j < 123)
	{
		_putchar(j);
		j++;
	}
	 _putchar('\n');
}
