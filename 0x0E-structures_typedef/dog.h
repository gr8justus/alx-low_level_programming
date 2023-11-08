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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
