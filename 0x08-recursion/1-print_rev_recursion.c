#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints in reverse recurse
 * @s: string to recurse
 */
int i = 1;
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + i);
		_putchar(*s);
	}
}
