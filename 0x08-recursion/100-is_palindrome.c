#include "main.h"
#include <string.h>
#include <stdio.h>

int compare(char *s, int n)
{
	if (n <= 0)
		return (1);
	if (*s == s[n - 1])
		return (compare(s + 1, n--));
	else
		return (0);
}


int is_palindrome(char *s)
{
	int n = strlen(s) / 2;

	return (compare(s, n));
}
