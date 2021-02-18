#include "holberton.h"

/**
 * _strncat - append src to dest
 * @dest: return
 * @src: append
 * @n: size to copy
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k;
	char *ptr;

	ptr = dest;
	for (j = 0; dest[j] != '\0'; j++)
	{
		ptr++;
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		*ptr = src[k];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
