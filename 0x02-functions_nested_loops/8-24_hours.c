#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: nothing
*/
void jack_bauer(void)
{
	int hour_digit_1, hour_digit_2, minutes, seconds, max = 9;

	for (hour_digit_1 = MIN; hour_digit_1 <= 2; hour_digit_1++)
	{
		for (hour_digit_2 = MIN; hour_digit_2 <= max; hour_digit_2++)
		{
			for (minutes = MIN; minutes <= 5; minutes++)
			{
				for (seconds = MIN; seconds <= MAX; seconds++)
				{
					if (hour_digit_1 == 2)
						max = 3;

					_putchar(hour_digit_1 | '0');
					_putchar(hour_digit_2 | '0');
					_putchar(':');
					_putchar(minutes | '0');
					_putchar(seconds | '0');
					_putchar('\n');
				} /* close seconds iteration block */
			} /* close minutes iteration block */
		} /* close hour_digit_2 iteration block */
	} /* close hour_digit_1 iteration block */
}
