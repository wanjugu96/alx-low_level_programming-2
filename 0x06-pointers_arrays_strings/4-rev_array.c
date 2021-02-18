#include "holberton.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of int
 * @n: length of the array
 * Return: array of integer reversed
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;
	int *ptr;

	ptr = a;
	for (i = 0; i < n - 1; i++)
		ptr++;
	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = *ptr;
		*ptr = tmp;
		ptr--;
	}
}
