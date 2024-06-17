#include <stdio.h>
#include "main.h"

#define MAX_LIMIT 4000000
#define DIVISOR 2

/**
 * main - Print sum of Fibonacci numbers
 *
 * Description: prints the sum of even fibonacci
 * numbers below MAX_LIMIT.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%i\n", fib_is_even());
	return (0);
}


/**
 * fib_is_even - sum even Fibonacci numbers
 *
 * Description: sums even Fibonacci numbers
 * below MAX_LIMIT.
 *
 * Return: sum of even Fibonacci terms.
 */
int fib_is_even(void)
{
	int num_1 = 1, num_2 = 2, next_num, sum = 0;

	while (next_num <= MAX_LIMIT)
	{
		if (num_2 % DIVISOR == 0) /* checks if num_2 is even */
		{
			sum += num_2;
		}
		next_num = num_1 + num_2;
		num_1 = num_2;
		num_2 = next_num;
	}
	return (sum);
}
