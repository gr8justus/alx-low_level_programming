#include "main.h"

/**
 * get_bit - get the bit at index
 * @n: number
 * @index: position to get bit value
 *
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_shift;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (n == 0 || index >= bits)
		return (-1);

	bit_shift = 1UL << index;

	if (n & bit_shift)
		return (1);
	else
		return (0);

}
