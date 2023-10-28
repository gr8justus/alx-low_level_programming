#include <stdlib.h>
#include <stdio.h>

/**
 * main - Add positive numbers
 * @argc: Argument count
 * @argv: Argument vector (Array)
 *
 * Return: if success (0) else
 *	1 (failure)
 */
int main(int argc, char *argv[])
{
	int i, sum, value;
	char *endptr;

	if (argc < 2)
	{
		printf("%d\n", 0);
		exit(EXIT_FAILURE);
	}
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			value = strtol(argv[i], &endptr, 10);

			if ((endptr == argv[i]) || (*endptr != '\0') || (value < 0))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
