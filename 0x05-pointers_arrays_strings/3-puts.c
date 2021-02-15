#include "holberton.h"


/**
 * _puts - print string
 * @str: given string
 * Return: string to stdout
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
