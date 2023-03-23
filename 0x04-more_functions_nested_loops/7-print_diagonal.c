#include "main.c"
/**
 * print_diagonal - prints diagonal stuff
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for(i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				_putchar('_');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
