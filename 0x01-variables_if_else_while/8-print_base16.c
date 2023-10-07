#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;

	i = 0;
	j = 97;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}

	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
