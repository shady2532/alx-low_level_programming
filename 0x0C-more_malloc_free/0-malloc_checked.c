#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}
