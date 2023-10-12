#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 *
 * Return: returns 1 if @c is uppercase.
 * 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
