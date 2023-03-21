#include "main.h"
/*
 * print_alphabet_10x - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_10x(void)
{
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 97 ; i < 123 ; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
