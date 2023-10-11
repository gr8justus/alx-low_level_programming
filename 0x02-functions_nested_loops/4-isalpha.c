#include "main.h"

/**
 * _isalpha - Checks if a letter is an alphabet
 * @c: The character to be checked
 *
 * Return: returns 1 if it is an alphabet.
 * 0 if not an alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 65 || c >= 97) && (c < 91 || c < 123))
		return (1);
	else
		return (0);
}
