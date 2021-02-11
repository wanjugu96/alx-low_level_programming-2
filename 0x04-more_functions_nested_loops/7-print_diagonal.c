#include "holberton.h"

/**
 * print_diagonal - Bresenham's algorithm
 * @n: int check
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int x;
	int y = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (y < n);
		{
			for (x = 0; x <= y; x++)
			{
				if (x > 0)
					_putchar(' ');
				if (x == y)
					_putchar('\\');
			}
			_putchar('\n');
			y++;
		}
	}
}
