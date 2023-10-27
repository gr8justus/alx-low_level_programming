#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the product of two numbers
 * @argc: Argument count
 * @argv: Argument vector (Array)
 *
 * Return: If success (0) else
 * 1 (failure)
 */
int main(int argc, char *argv[])
{
	int product, i;

	if (argc < 3 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	product = 1;
	for (i = 1; i < argc; i++)
		product *= atoi(argv[i]);
	printf("%d\n", product);
	return (0);
}
