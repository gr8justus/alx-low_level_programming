#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		length = j + 1;
		j++;
	}

	return (length);
}
