#include "main.h"
/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */
int factorial(int n)
{
	return (n != 0 ? n * factorial(n - 1) : 1);
}
