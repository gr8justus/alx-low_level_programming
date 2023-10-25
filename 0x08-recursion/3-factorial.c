#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: Digit to factorialise
 *
 * Return: The calculated product
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
