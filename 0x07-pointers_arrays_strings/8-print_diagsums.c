#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int r, c, p, k = 0, i = 0;

	for (r = 0; r < size; r++)
	{
		p = (r * size) + r;
		k += *(a + p);
	}
	for (c = 0; c < size; c++)
	{
		p = (c * size) + (size - 1 - c);
		i += *(a + p);
	}
	printf("%i, %i\n", k, i);
}
