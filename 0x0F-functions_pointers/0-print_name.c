#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: Pointer to function to print name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
