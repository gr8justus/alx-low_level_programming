#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 (Failure)
 */
int main(void)
{
	char *message;
	int message_length;

	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	message_length = strlen(message);

	write(2, message, message_length);
	return (1);
}
