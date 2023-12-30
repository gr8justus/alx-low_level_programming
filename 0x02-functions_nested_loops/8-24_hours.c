#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour_digit_1, hour_digit_2, minutes_digit_1, minutes_digit_2, max = 9;

	for (hour_digit_1 = MIN; hour_digit_1 <= 2; hour_digit_1++)
	{
		for (hour_digit_2 = MIN; hour_digit_2 <= max; hour_digit_2++)
		{
			for (minutes_digit_1 = MIN; minutes_digit_1 <= 5; minutes_digit_1++)
			{
				if (hour_digit_1 == 2)
					max = 3;

				for (minutes_digit_2 = MIN; minutes_digit_2 <= MAX; minutes_digit_2++)
				{
					_putchar(hour_digit_1 + '0');
					_putchar(hour_digit_2 + '0');
					_putchar(':');
					_putchar(minutes_digit_1 + '0');
					_putchar(minutes_digit_2 + '0');
					_putchar('\n');
				} /* close minutes_digit_2 iteration block */
			} /* close minutes_digit_1 iteration block */
		} /* close hour_digit_2 iteration block */
	} /* close hour_digit_1 iteration block */
}
