#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	fizz_buzz();

	return (0);
}

/**
 * fizz_buzz - Prints number 1 - 100
 * Description: Prints number 1 - 100 to stdout replacing multiples of 5 and 3
 * with the word 'FizzBuzz', multiples of 5 with 'Buzz' and multiples of 3 with
 * 'Fizz'
 * Return: No return value
 */
void fizz_buzz(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if ((l % 5) == 0 && (l % 3) == 0)
			printf("%s ", "FizzBuzz");
		else if ((l % 5) == 0)
			if (l == 100)
				printf("%s\n", "Buzz");
			else
				printf("%s ", "Buzz");
		else if ((l % 3) == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", l);
	}
}
