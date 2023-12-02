#include <stdio.h>
#include <stdlib.h>

/**
  * main - print arguments
  * @ac: argument count
  * @av: argument vector
  *
  * Description: prints all the arguments
  * supplied to a program to stdout
  *
  * Return: Always 0 (success)
  */
int main(int __attribute__((unused)) ac, char **av)
{
	while (*av != NULL)
	{
		printf("%s", *av); /* prints arguments on a line */
		av++;

		/* add space after argument if there is a next */
		if (*av != NULL)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
