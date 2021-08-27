#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrev(char *str)
{
	int i;
	int n;
	char swap;

	i = 0;
	n = 0;
	while (str[n])
	{
		n++;
	}
	n = n - 1;
	while(i < n)
	{
		swap = str[n];
		str[n] = str[i];
		str[i] = swap;
		i++;
		n--;
	}
	
	return str;
}
