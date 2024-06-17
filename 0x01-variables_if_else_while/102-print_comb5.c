#include <stdio.h>

#define MIN 0
#define MAX 100
#define DIVISOR 10

/**
 * main - print different combinations
 *
 * Description: prints different possible
 * combinations of two two-digits numbers
 * without repetition upon swaping of the two
 * numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num_1, num_2, fdg_1, sdg_1, fdg_2, sdg_2;

	num_1 = MIN;
	while (num_1 < MAX) /* iterates first number */
	{
		num_2 = MIN;
		while (num_2 < MAX) /* iterates second number */
		{
			if (num_2 > num_1) /* prevents repetition of same number combination*/
			{
				fdg_1 = num_1 / DIVISOR;
				sdg_1 = num_1 % DIVISOR;
				fdg_2 = num_2 / DIVISOR;
				sdg_2 = num_2 % DIVISOR;

				putchar(fdg_1 + '0');
				putchar(sdg_1 + '0');
				putchar(' ');
				putchar(fdg_2 + '0');
				putchar(sdg_2 + '0');

				if (!(num_1 == MAX - 2 && num_2 == MAX - 1))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_2++;
		}
		num_1++;
	}
	putchar('\n');

	return (0);
}
