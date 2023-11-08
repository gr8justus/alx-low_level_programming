#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array to search from
 * @size: Number of elements in the array
 * @cmp: Pointer to the compare function
 *
 * Return: Index of integer found first
 * else -1 (failure).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret_value;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		ret_value = cmp(array[i]);
		if (ret_value == 1)
			return (i);
		i++;
	}
	return (-1);
}
