#include "holberton.h"

/**
 * puts2 - slicing
 * @str: string given
 * Return: single characters
 */
void puts2(char *str)
{
	int i, y, length;

	for (y = 0; *(str + y) != '\0'; y++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
