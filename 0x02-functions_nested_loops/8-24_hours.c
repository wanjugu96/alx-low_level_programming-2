B#include "holberton.h"

int _putchar(char c);

/**
 * jack_bauer - display 24 hours
 * Return: 24 hours
 */
void jack_bauer(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 23)
	{
		y = 0;
		while (y <= 59)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
			y++;
		}
		x++;
	}
}
