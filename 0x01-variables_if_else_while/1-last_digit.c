#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int n_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_last_digit = n % 10;
	printf("Last digit of %d is %d ", n, n_last_digit);
	if (n_last_digit > 5)
		printf("and is greater than 5\n");
	else if (n_last_digit == 0)
		printf("and is 0\n");
	else if (n_last_digit < 6 && !0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
