#include "holberton.h"

/**
 * print_diagonal - print straight line
 * @n: int check
 * Return: straight line
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
