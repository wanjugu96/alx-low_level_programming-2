#include "holberton.h"

/**
 * _strspn - gets lengthof a prefix substring using trivial algo
 * @s: string to check
 * @accept: string to check against
 * Return: number of bytes in s to check
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				break;
		}
		if (!accept[k])
			break;
	}
	return (i);
}
