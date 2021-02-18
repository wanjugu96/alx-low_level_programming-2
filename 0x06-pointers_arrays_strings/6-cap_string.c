#include "holberton.h"

/**
 * *cap_string - capitalize first letters of word
 * @s: string
 * Return: uppercase word in string
 */

char *cap_string(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i - 1] == '\t' || s[i - 1] == ' ' || s[i - 1] == '\n')
                s[i] -= 32;
            else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.')
                s[i] -= 32;
            else if (s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
                s[i] -= 32;
            else if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{')
                s[i] -= 32;
            else if (s[i - 1] == '}')
                s[i] -= 32;
        }
    }
    return (s);
}
