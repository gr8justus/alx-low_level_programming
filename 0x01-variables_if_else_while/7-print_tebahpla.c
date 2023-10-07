#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a_z = 122;

	while (a_z >= 97)
	{
		char lower_case_letter = (char)a_z;

		putchar(lower_case_letter);
		a_z--;
	}
	putchar('\n');
	return (0);
}
