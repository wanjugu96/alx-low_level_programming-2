#include "holberton.h"

/**
 * _memset - Fills the first @n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: pointer to the memory to be filled
 * @b: character to fill memory with
 * @n: number of bytes to be filled
 * Return: a pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, k;

	k = n;
	for (i = 0; i < k; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
