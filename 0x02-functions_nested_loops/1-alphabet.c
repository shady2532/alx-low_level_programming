#include "main.h"
//I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game 
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
