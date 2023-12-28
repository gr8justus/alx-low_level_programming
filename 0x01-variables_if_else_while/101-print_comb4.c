#include <stdio.h>

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
	int i, j, l;

	for (i = 0; i <= 9; i++)
	{
		j = i + 1;

		while (j <= 9)
		{
			l = j + 1;

			while (l <= 9)
			{
				putchar(i | '0');
				putchar(j | '0');
				putchar(l | '0');

				if (i == 7 && j == 8 && l == 9)
					break;

				putchar(',');
				putchar(' ');
				l++;
			}
			j++;
		}
	}
	putchar('\n');

	return (0);
}
