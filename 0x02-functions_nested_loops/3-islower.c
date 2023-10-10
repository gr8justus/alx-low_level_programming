#include "main.h"

/**
 * _islower - Checks if a letter is lowercase
 * @c: The character to be checked
 *
 * Return: returns 1 if it is a lowercase letter.
 * 0 if not a lowercase letter.
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c < 'z')
		result = _putchar(49);
	else
		result = _putchar(48);

	return (result);
}
