#include "main.h"
/**
 * prime - checks if prime
 * @i: iterator
 * @n: number to be checked
 * Return: value
 */
int prime(int n, int i)
{
	if (i * i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (prime (n, i + 1));

	}
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	else
		return (prime(n, i));
}
