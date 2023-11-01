#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to concatenate to
 * @src: string 2
 *
 * Return: dest (concatenated string)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = _strlen(dest);
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++, j++;
	}
	dest[i] = '\0';
	return (dest);
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
