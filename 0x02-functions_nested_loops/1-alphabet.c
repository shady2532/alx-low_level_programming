include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
    	return (0);
}


void print_alphabet(void)
{
	int i;
	char c[8] = "alphabet";

	for(i=0;i<8;i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
}
