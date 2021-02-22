#include "holberton.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to search
 * @accept: string to check against
 * Return: pointer to byte in s that matches or null if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return (0);
}
