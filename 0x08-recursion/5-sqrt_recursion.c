#include "holberton.h"

 /**
  * sqrt_check - checks for the square root of c
  * @guess at sqrt
  * @num: number to find sqrt of
  *
  * Return: -1 or sqrt of c
  */

int _sqrt(guess, num)
{

    if (guess * guess == num)
    {
        return guess;
    }
    else if (guess * guess > num)
    {
        return (-1);
    }
    return (_sqrt(guess + 1, num));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
    if (n == 0)
        return (0);
    return (_sqrt(1, n));
}
