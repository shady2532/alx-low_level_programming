#include "main.h"

/**
 * print_sign - checks if n is positive or negative or zero.
 * @n: character variable to be checked.
 * Return: returns 1 if c is positive, returns -1 if c is negative, else returns 0.
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else 
		return (-1);
}
