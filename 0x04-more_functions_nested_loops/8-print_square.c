#include "main.h"

/**
 * print_square- Prints a square
 * @size: Size of the square
 *
 * Return: No return value
 */
void print_square(int size)
{
	int j, l;

	if (!(size <= 0))
	{
		for (j = 0; j < size; j++)
		{
			for (l = 0; l < size; l++)
				_putchar('#');
			
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
