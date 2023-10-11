#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: integer to be computed
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
