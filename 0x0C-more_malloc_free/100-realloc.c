#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: Pointer to previously allocated memory
 * @old_size: Allocated memory
 * @new_size: New memory block
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr = NULL;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	if ((new_size == 0) && (ptr != NULL))
		free(ptr);
	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	if (new_size > old_size)
		_strcat(nptr, ptr);
	free(ptr);
	return (nptr);
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
