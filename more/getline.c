#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void free_exit(char *str);

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
			free_exit(lineptr);
		else
			printf("%s", lineptr);
	} while (nread);

	free(lineptr); /* deallocate memory allocated by getline */
	lineptr = NULL;

	return (0);
}

/**
  * free_exit - free memory and exit
  * @str: pointer to str to be freed
  *
  * Description: frees memory alloted to str
  * and exits the program
  *
  * Return: nothing
  */
void free_exit(char *str)
{
	putchar('\n');
	free(str);

	if (errno == EINVAL || errno == ENOMEM)
	{
		perror("error");
		exit(EXIT_FAILURE);
	}
	else
		exit(EXIT_SUCCESS);
}
