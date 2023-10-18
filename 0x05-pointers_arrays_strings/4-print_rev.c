#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: String to reverse
 */
void print_rev(char *s)
{
	int j;
	int len = (_strlen(s) - 1);

	for (j = len; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}

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
