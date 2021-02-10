#include "holberton.h"

/**
 *print_alphabet - print lower case alphabet
 *
 *Return: 0
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
