#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(c + i);
	}

	c = 'A';

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(c + i);
	}
	putchar('\n');
	return (0);
}
