#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int even = 0;

	if (_strlen(str) % 2 != 0)
		even += 1;
	for (i = (_strlen(str) + even) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
