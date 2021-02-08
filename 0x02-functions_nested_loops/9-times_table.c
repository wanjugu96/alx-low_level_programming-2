#include "holberton.h"
/**
 * times_table - create multiplication table
 *
 * Return: output print the 9 times table
 */

void times_table(void)
{
	int m;
	int n;

	for (m = 0; m <= 9; m++)
	{
		n = 0;
		_putchar('0');
		for (n = 0; n <= 9; n++)
		{
			if ((m * n) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m * n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m * n / 10 + '0');
				_putchar(m * n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
