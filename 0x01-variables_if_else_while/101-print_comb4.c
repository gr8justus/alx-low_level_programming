#include <stdio.h>

#define MIN 0
#define MAX 9

/**
 * main - print different combinations
 *
 * Description: prints different possible
 * combinations of three digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = MIN; first_digit <= MAX; first_digit++)
	{
		second_digit = first_digit + 1;

		while (second_digit <= MAX)
		{
			third_digit = second_digit + 1;

			while (third_digit <= MAX)
			{
				putchar(first_digit | '0');
				putchar(second_digit | '0');
				putchar(third_digit | '0');

				if (!(first_digit == 7 && second_digit == 8 && third_digit == MAX))
				{

					putchar(',');
					putchar(' ');
				}
				third_digit++;
			}
			second_digit++;
		}
	}
	putchar('\n');

	return (0);
}
