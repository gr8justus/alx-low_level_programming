#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: String to concatenate to
 * @src: String 2
 * @n: Bytes to copy from string 2
 *
 * Return: dest (concatenated string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	i = _strlen(dest);
	j = _strlen(src);

	if (n > j)
		n = j;

	for (l = 0; l < n; l++)
	{
		dest[i] = src[l];
		i++;
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
	int length = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		length = j + 1;
		j++;
	}
	return (length);
}
