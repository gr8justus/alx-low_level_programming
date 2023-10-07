#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a_z = 97;
	int A_Z = 65;

	while (a_z < 123)
	{
		char lower_case_letter = (char)a_z;

		putchar(lower_case_letter);
		a_z++;
	}

	do {
		char upper_case_letter = (char)A_Z;

		putchar(upper_case_letter);
		A_Z++;
	} while (A_Z <= 90);

	putchar('\n');
	return (0);
}
