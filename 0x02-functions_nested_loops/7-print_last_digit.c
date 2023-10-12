#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract last digit from
 *
 * Return: Last digit of @n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
