#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void)
{
	int i;
	int t = 10;

	while (t--)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
	}
}
