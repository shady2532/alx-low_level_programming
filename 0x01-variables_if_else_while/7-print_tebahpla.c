#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(c - i);
	}
	putchar('\n');
	return (0);
}
