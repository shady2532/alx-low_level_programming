#include "main.h"

/**
 * print_sign - checks for lowercase character.
 * @c: character variable to be checked.
 * Return: returns 1 if c is positive, returns -1 if c is negative, else returns 0.
 */

int print_sign(int c)
{
	if (c > 0)
		return (1);
	else if (c == 0)
		return (0);
	else if (c < 0)
		return (-1);
}
