#include <stdio.h>
#include "main.h"

#define NUMBER 1024
#define MULTIPLE_1 3
#define MULTIPLE_2 5

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%i\n", sum_multiples());
	return (0);
}

/**
 * sum_multiples - sum of multiples
 *
 * Description: computes the sum of multiples of
 * 3 and 5 below 1024.
 *
 * Return: sum of multiples
 */
int sum_multiples(void)
{
	int sum = 0, iterator;

	for (iterator = MULTIPLE_1; iterator < NUMBER; iterator++)
	{
		if (iterator % MULTIPLE_1 == 0 || iterator % MULTIPLE_2 == 0)
		{
			sum += iterator;
		}
	}
	return (sum);
}
