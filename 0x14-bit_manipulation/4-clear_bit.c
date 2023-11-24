#include "main.h"

/**
 * clear_bit - clear the bit value
 * @n: pointer to the value of number
 * @index: position to clear bit value
 *
 * Description: clears the bit value at index
 *
 * Return: 1 (success) or -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_shift;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (n == NULL || index >= bits)
		return (-1);

	bit_shift = ~(1UL << index);

	*n &= bit_shift;

	return (1);
}
