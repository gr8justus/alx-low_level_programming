#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates str
 * @str: String to duplicate
 *
 * Return: Pointer to duplicate or NULL (failure)
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	int str_length, i;

	if (str == NULL)
		return (NULL);

	str_length = _strlen(str);
	duplicate = malloc(str_length + 1);

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < str_length; i++)
		duplicate[i] = str[i];

	duplicate[str_length] = '\0';
	return (duplicate);
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
