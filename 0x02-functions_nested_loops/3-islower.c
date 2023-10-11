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
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
