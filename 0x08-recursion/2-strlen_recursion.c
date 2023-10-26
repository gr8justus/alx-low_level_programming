#include "main.h"

/**
 * _strlen_recursion - Gets the length of a string
 * @s: String
 *
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	
	return (1 + _strlen_recursion(s + 1));
}
