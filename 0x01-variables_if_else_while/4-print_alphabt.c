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

	for (i = 0 ; i < 26 ; i++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c + i);

	}
	putchar('\n');
	return (0);
}
