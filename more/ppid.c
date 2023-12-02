#include <unistd.h>
#include <stdio.h>

/**
  * main - print ppid
  *
  * Description: prints the parent process
  * identifier to stdout
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	pid_t ppid; /* pid/ppid is a signed integer */

	ppid = getppid();
	printf("%i\n", ppid);

	return (0);
}
