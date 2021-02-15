#include "holberton.h"

/**
 * print_rev - reverse a string
 * @s: string value
 * Return: the reverse string
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (j = 0; *(s + j) != '\0'; j++)
	{
		k++;
	}
	k = k - 1;
	for (i = k; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
