#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour, minutes;

	for (hour = MIN; hour <= 23; hour++)
	{
		for (minutes = MIN; minutes <= 59; minutes++)
		{
			if (hour <= 9)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
			{
				_putchar(hour / 10 + '0');
				_putchar(hour % 10 + '0');
			}
			_putchar(':');
			if (minutes <= 9)
			{
				_putchar('0');
				_putchar(minutes + '0');
			}
			else
			{
				_putchar(minutes / 10 + '0');
				_putchar(minutes % 10 + '0');
			}
			_putchar('\n');
		} /* close minutes iteration block */
	} /* close hour iteration block */
}
