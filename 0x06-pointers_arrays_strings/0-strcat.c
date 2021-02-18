#include "holberton.h"

/**
 * _strcat - append src to dest
 * @dest: return
 * @src: append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int j, k;
	char *ptr;

	ptr = dest;
	for (j = 0; dest[j] != '\0'; j++)
	{
		ptr++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		*ptr = src[k];
		ptr++;
	}
	*ptr = '\0';
	return dest;
}
