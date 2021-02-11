#include <stdio.h>

/**
 * main - entry point
 * print 1 - 100 except multiple of 3 & 5
 * Return: Fizz || Buzz || FizzBuzz
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	printf('\n');
	return (0);
}
