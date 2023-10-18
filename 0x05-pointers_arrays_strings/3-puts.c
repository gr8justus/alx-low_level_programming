#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
