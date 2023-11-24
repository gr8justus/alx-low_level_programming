#include "main.h"

/**
 * flip_bits - flip bits
 * @n: number 1
 * @m: number 2
 *
 * Description: flips the bits value of n to get
 * to m
 *
 * Return: count of bit flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int flip_count = 0;

	while (flip)
	{
		flip_count += flip & 1;
		flip >>= 1;
	}

	return (flip_count);
}
