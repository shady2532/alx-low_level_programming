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
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{}

	for(; j < n && src[i] != '\0'; j++)
		dest[i + j] = src[j];

	dest[j + i] = '\0';

	return (dest);
}
