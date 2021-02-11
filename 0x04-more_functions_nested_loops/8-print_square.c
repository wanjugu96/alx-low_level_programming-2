#include "holberton.h"

/**
 * print_square - print square
 * @size: int check
 * Return: square drawn with '#'
 */

void print_square(int size)
{
	int i, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			y++;
		}
	}
}
