#include "holberton.h"

/**
 * swap_int- swap integer 42 and 98
 * @a: pointer
 * @b: pointer
 * Return: values swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a  = *b;
	*b  = tmp;
}
