#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to store dog data
 * @d: Instance of dog_t
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	/* Pointers value set to NULL to prevent dangling pointers */
	d->name = NULL;
	d->owner = NULL;
	free(d);
}


