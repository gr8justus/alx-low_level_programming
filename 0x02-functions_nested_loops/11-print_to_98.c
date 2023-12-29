#include "main.h"
#include <stdio.h>

#define BASE_NUM 98

/**
 * print_to_98 - print numbers from n to 98
 * @n: number to start printing from
 *
 * Return: nothing
*/
void print_to_98(int n)
{
	int num = n;

	while ((n > BASE_NUM) ? num >= BASE_NUM : num <= BASE_NUM)
	{
		printf("%d", num);

		if (num != BASE_NUM)
			printf(", ");

		(n > BASE_NUM) ? num-- : num++;
	}
	putchar('\n');
}
