#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - returns last digit of n.
 * @n: character variable to be checked.
 * Return: returns last digit of n.
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
