#include "holberton.h"
#include "1-alphabet.c"

void print_alphabet(void);

void print_alphabet_x10(void)
{
	int repeat;
    
	for (repeat = 0; repeat <= 10; repeat++)
	{
		print_alphabet();
	}
}
