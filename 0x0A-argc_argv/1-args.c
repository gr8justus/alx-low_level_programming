#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the number of argument
 * @argc: Argument count
 * @argv: Argument vector (Array)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
