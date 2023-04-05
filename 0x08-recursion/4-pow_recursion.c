#include "main.h"
/**
 * _pow_recursion - gives power of int
 * @x: integer to power
 * @y: power to do
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1 || y == 0)
		return (1);
	else
	{
		return (x * _pow_recursion(x, y-1));
	}
}
