#include "main.h"
/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */
int factorial(int n)
{
	(n == 0 || n == 1) ? return(1) : return(n * factorial(n-1));
}
