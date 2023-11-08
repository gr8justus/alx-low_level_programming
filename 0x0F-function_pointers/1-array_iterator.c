#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on array elements
 * @array: Array to execute function on
 * @size: Size of array
 * @action: Pointer to function to execute
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || !(size > 0) || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
