#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MIN_LINE_LENGTH 1

/**
  * main - print user input
  *
  * Return: always 0 (success)
  */
int main(void)
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t nread;

	do {
		printf("$ ");
		nread = getline(&lineptr, &n, stdin);

		if (nread == -1) /* check for EOF or failure */
		{
			putchar('\n');

			if (errno == EINVAL || errno == ENOMEM)
				exit(EXIT_FAILURE);

			exit(EXIT_SUCCESS);
		}
		else if (nread > MIN_LINE_LENGTH)
			printf("%s", lineptr);
	} while (nread);

	free(lineptr); /* deallocate memory allocated by getline */
	lineptr = NULL;

	return (0);
}
