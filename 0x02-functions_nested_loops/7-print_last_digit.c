#include "main.h"

/**
 * print_last_digit - returns last digit of n.
 * @n: character variable to be checked.
 * Return: returns last digit of n.
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		int r =	n % 10;
		_putchar('0' + r);
		return (r);
	}
	else
	{
		n *= -1;
		int r = n % 10;
		_putchar('0' + r);
		return (r);
	}
}
