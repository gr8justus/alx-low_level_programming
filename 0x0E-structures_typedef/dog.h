#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog profiling
 * @name: First data
 * @age: Second data
 * @owner: Third data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
