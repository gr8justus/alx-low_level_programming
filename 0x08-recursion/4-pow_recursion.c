#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number
 * @x: Base number
 * @y: Exponent
 *
 * Return: Result
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
