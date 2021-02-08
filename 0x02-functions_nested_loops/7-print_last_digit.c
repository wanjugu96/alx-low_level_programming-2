#include "holberton.h"

int _putchar(char c);
/**
 * print_last_digit - return last digit
 * @y: int checked
 * Return: last digit
 */
int print_last_digit(int y)
{
	int lastDigit = y % 10;

	if (y < 0)
	{
		_putchar((lastDigit * (-1)) + '0');
		return (lastDigit * (-1));
	}
	else
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
