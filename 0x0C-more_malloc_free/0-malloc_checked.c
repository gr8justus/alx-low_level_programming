#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: size to be allocated
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem_alloted = malloc(b);

	if (mem_alloted == NULL)
		exit(98);
	return (mem_alloted);
}
