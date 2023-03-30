#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n - 1; i >= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
