#include "main.h"

/**
 * print_sign - checks if n is positive or negative or zero.
 * @n: character variable to be checked.
 * Return: returns 1 if c is positive, returns -1 if c is negative, else returns 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else 
	{
		putchar('-');
		return (-1);
	}
}
