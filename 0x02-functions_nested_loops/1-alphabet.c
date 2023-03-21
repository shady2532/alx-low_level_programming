#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
	int i;
	char c[8] = "alphabet";

	for(i=0;i<8;i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
