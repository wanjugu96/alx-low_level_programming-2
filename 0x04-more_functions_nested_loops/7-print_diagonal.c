#include "holberton.h"

/**
 * print_diagonal - Bresenham's algo
 * @n: int check
 * Return: '\'
 */
void print_diagonal(int n)
{
	int i, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < n)
		{
			for (i = 0; i <= y; i++)
			{
				if (i > 0)
					_putchar(' ');
				if (i == y)
					_putchar('\\');
			}
			_putchar('\n');
			y++;
		}
	}
}
