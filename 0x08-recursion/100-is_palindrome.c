#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * compare - Main Entry
 * @s: input
 * @n: input
 * Return: 0
 */
int compare(char *s, int n)
{
	if (n <= 0)
		return (1);
	if (*s == s[n - 1])
		return (compare(s + 1, n - 2));
	else
		return (0);
}
/**
 * is_palindrome - Main Entry
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	return (compare(s, n));
}
