#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print arguments
 * @argc: Argument count
 * @argv: Argument vector (Array)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
