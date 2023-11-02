#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_str = NULL;
	unsigned int s2_length, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s2_length = _strlen(s2);

	if (n > s2_length)
		n = s2_length;
	size = _strlen(s1) + n + 1;
	concatenated_str = malloc(size);

	if (concatenated_str == NULL)
		return (NULL);
	_strcat(concatenated_str, s1);
	_strncat(concatenated_str, s2, n);
	return (concatenated_str);
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
