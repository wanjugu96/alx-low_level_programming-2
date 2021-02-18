#include "holberton.h"
/**
 * *cap_string - capitalize first letters of word
 * @s: string
 * Return: uppercase word in string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == '\t' || s[i - 1] == ' ' || s[i - 1] == '\n')
				s[i] -= 32;
			else if (s[i - 1] == ',')
				s[i] -= 32;
			else if (s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!')
				s[i] -= 32;
			else if (s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(')
				s[i] -= 32;
			else if (s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
