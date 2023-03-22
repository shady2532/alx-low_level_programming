#include "main.h"
#include <limits.h>

/**
 * print_last_digit - returns last digit of n.
 * @n: character variable to be checked.
 * Return: returns last digit of n.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			r = -n;
			r = n % 10;
			putchar('0' + r);
			return (r);
		}
		n *= -1;
	}
	r = n % 10;
	_putchar('0' + r);
	return (r);
}
