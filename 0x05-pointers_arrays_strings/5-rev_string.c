#include "holberton.h"

/**
 * rev_string - stacks algo
 * @s: string value
 * Return: the characters
 */

void rev_string(char *s)
{
	int i, j, k, length;
	char *begin, *end, tmp;

	/* check for length of string and store in i */
	length = 0;
	for (i = 0; s[i] != 0; i++)
	{
		length++;
	}
	/* assign pointers to string value */
	begin = s;
	end = s;

	/* reverse the string */
	for (j = 0; j < length - 1; j++)
		end++;

	for (k = 0; k < length / 2; k++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		/* increment begin and decrement end */
		begin++;
		end--;
	}
}
