#include "holberton.h"

/**
 * _strlen - length of a string
 * @s: pointer of char
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count++;
	}
	return (count);
}
