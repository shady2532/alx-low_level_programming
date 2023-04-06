#include "main.h"
#include <string.h>
#include <stdio.h>

int counting(char *s, int n, int i)
{
	int counter = 0;

	if (s[i] == s[n - 1 - i])
	{
		counter = counting (s + 1, n, i++);
		return (counter++);
	}
}


int is_palindrome(char *s)
{
	int i;
	int n = strlen(s);
	int counter = 0;

	/*for (i=0; i<n/2; i++)
	{
		if (s[i]==s[n-i-1])
			counter++;
	}*/
	


	if (counter == n/2)
		return (1);
	else
		return (0);
}
