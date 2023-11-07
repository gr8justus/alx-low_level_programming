#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: New instance of struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
