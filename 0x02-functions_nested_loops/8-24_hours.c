#include "holberton.h"

int _putchar(char c);

/**
 * jack_bauer - display 24 hours
 * Return: every minute of day (00:00 - 23:59)
 */
void jack_bauer(void)
{
	int hour = 0;
	int min;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
