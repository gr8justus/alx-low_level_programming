#include <stdio.h>
#include "main.h"

#define NUM_COUNT 98

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	fib_98();
	return (0);
}

/**
 * fib_98 - print fibonacci numbers
 *
 * Description: prints the first 98 fibonacci
 * numbers starting with 1 and 2.
 *
 * Return: nothing
 */
void fib_98(void)
{
	int print_count = 1;
	long num_1 = 1, num_2 = 2, next_num;

	_putchar(num_1 + '0');

	while (print_count < NUM_COUNT)
	{
		printf(", %lu", num_2);
		print_count++;
		next_num = num_1 + num_2;
		num_1 = num_2;
		num_2 = next_num;
	}
	putchar('\n');
}
