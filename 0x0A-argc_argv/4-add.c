#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int count = 1;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; i < argv[count][i]; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			count++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
