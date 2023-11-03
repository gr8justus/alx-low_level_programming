#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocate memory to array
 * @nmemb: Number of elements
 * @size: Bytes to allocate for each element
 *
 * Return: Pointer to allocated memory or NULL (failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem_alloted;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	mem_alloted = malloc(nmemb * size);

	if (mem_alloted == NULL)
		return (NULL);
	memset(mem_alloted, 0, nmemb * size);
	return (mem_alloted);
}
