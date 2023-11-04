#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: Smallest value of element
 * @max: Largest value of element
 *
 * Return: Pointer to array or NULL (failure).
 */
int *array_range(int min, int max)
{
	int nmemb, j;
	int *arr = NULL;

	if (min > max)
		return (NULL);
	nmemb = (max - min) + 1;
	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < nmemb; j++)
	{
		arr[j] = min;
		min++;
	}
	return (arr);
}
