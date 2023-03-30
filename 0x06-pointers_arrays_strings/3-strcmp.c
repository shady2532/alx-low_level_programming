#include "main.h"
/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{}

	for (j = 0; s2[j] != '\0'; j++)
	{}

	if (i == j)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if(s1[i] != s2[i])
				return (0);
			else
				continue;
		}
		return (1);
	}
	else 
		return (0);
}
