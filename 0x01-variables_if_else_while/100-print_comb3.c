#include <stdio.h>

/**
 * main - print different combinations
 *
 * Description: prints different possible
 * combinations of two digits.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = i + 1;

		while (j <= 9)
		{
			putchar(i | '0');
			putchar(j | '0');

			if (i == 8 && j == 9)
				break;

			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');

	return (0);
}
