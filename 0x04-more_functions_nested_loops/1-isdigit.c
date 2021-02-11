#include "holberton.h"

/**
 * _isdigit - check for digit 0-9
 * @c: int checked
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
