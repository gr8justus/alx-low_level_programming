#include <stdio.h>
#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int j, length;

	if (*s == '\0')
		length = 0;

	j = 0;
	while (s[j] != '\0')
	{
		length = j + 1;
		j++;
	}

	return (length);
}
