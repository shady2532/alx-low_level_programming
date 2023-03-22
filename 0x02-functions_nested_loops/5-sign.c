#include "main.h"

/**
 * print_sign - checks if n is positive or negative or zero.
 * @n: character variable to be checked.
 * Return: returns 1 if c is positive, returns -1 if c is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	else 
	{
		putchar('-');
		putchar('1');
	}
	return (0);
}
