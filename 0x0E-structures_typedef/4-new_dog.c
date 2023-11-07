#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of dog_t
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog owner
 *
 * Return: Pointer to dog data or NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name); /* saves a copy of name in memory */
	dog->age = age;
	dog->owner = _strdup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		if (dog->name != NULL)
			free(dog->name);
		if (dog->owner != NULL)
			free(dog->owner);
		free(dog);
		return (NULL);
	}
	return (dog);
}

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
	duplicate[str_length] =	'\0';
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
	int length = 0;

	if (*s != '\0')
	{
		int j = 0;

		while (s[j] != '\0')
		{
			length = j + 1;
			j++;
		}
	}
	return (length);
}
