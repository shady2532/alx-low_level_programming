#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int destLen = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[destLen + 1] = src[i];
	dest[destLen + 1] = '\0';

	return (dest);
}
