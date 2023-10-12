#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The parameter to be checked
 *
 * Return: returns 1 if @c is a digit.
 * 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
