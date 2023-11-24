#include "main.h"

/**
 * get_endianness - get bytes order
 *
 * Description: gets the order in which byts are
 * stored in the computer memory
 *
 * Return: byte order
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	return ((int)*ptr);
}
