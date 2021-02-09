#include "holberton.h"

/**
 *print_alphabet - from a to z using variables
 *
 *Return: print to stdout the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
