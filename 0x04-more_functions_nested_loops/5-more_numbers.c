#include "main.h"

/**
 * more_numbers - Prints numbers 0 - 14 10 times
 *
 * Return: Nothing is returned
 */
void more_numbers(void)
{
	int j, l;

	for (j = 0; j < 10; j++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l > 9)
				_putchar('0' | l / 10);

			_putchar('0' | l % 10);
		}

		_putchar('\n');
	}
}
