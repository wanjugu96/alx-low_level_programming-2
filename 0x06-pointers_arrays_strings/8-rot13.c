#include "holberton.h"
/**
 * *rot13 - encode using *13
 * @s: given string
 * Return: converted string
 */
char *rot13(char *s)
{
	int i, y;
	char *letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *after = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		y = 0;
		while (letter[y] != '\0')
		{
			if (letter[y] == s[i])
			{
				s[i] = after[y];
				break;
			}
			y++;
		}
		i++;
	}
	return (s);
}
