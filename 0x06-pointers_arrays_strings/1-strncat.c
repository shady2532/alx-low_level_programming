#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for(j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[j + i] = '\0';

	return (dest);
}
