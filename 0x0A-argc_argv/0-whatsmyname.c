#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print program name
 * @argc: Argument count
 * @argv: Argument vector (Array)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
