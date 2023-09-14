#include "main.h"
/**
 * jack_bauer - function that prints every minute of
 * the day of Jack Bauer, starting from midnight
 * to one minute to midnight
 * @void: blank
 * Return:
 */
void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar(10);

		}
	}


}
