#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a_z;
	char lower_case_letter;

	a_z = 97;

	while (a_z < 123)
	{
		lower_case_letter = (char)a_z;

		if (lower_case_letter != 'e' && lower_case_letter != 'q')
			putchar(lower_case_letter);
		a_z++;
	}
	putchar('\n');
	return (0);
}
