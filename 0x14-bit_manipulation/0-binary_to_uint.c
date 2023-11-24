#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary string
 *
 * Description: converts binary string to decimal
 *
 * Return: converted string or 0 (failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		decimal = (decimal << 1) + (*b - '0');
		++b;
	}

	return (decimal);
}
