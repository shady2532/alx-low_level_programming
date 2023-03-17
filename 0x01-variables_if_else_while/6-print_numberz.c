#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(c + i);
	}
	putchar('\n');
	return (0);
}
