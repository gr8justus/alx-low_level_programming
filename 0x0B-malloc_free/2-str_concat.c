#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to concatenated string or NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str = NULL;
	int length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length = _strlen(s1) + _strlen(s2) + 1;
	concatenated_str = malloc(length);

	if (concatenated_str == NULL)
		return (NULL);
	_strcat(concatenated_str, s1);
	_strcat(concatenated_str, s2);
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
