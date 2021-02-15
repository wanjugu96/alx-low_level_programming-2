#include "holberton.h"

/**
 * _strlen - length of a string
 * @s: pointer of char
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
