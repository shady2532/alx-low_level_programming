#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len;
	int factor = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	while (len--)
	{
		if(b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			ui += factor;
		factor *= 2;
	}
	return (ui);
}