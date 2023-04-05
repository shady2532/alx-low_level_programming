#include "main.h"
/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n != 0 ? n * factorial(n - 1) : 1);
}
