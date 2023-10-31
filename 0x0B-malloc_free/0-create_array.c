#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array of chars.
 * @size: Specifies bytes of char to be created.
 * @c: Character to initialise array.
 *
 * Return: Pointer to array (success)
 *	NULL (failure)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
