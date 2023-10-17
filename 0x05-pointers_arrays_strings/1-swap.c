#include "main.h"

/**
 * swap_int - Changes each parameter to the other
 * @a: param 1
 * @b: param 2
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
