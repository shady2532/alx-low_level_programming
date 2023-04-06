#include "main.h"
#include <string.h>
#include <stdio.h>

int compare(char *s, int n)
{
	int i = 0;
	int counter = 0;

	if (s[i] == s[n - 1 - i])
	{
		counter = compare(s + 1, n);
		i++;
		return (counter++);
	}
}


int is_palindrome(char *s)
{
	int n = strlen(s);

	return (compare(s, n));
}
