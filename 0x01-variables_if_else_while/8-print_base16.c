#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	for (i = 0 ; i < 6 ; i++)
	{
		putchar(c + i);
	}
	putchar('\n');
	return (0);
}
