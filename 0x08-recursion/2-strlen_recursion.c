#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _str_recursion(s + 1);
		return (n++);
	}
	return (0);
}
