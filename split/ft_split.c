#include <stdlib.h>
#include <stdio.h>

int spacejam(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return 1;
	return 0;
}

int wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && spacejam(str[i]) == 1)
			i++;
		if (str[i] && spacejam(str[i]) == 0)
			count++;
		while (str[i] && spacejam(str[i]) != 1)
			i++;
	}
	return count;
}

char *ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char *strduper(char *src)
{
	int i;
	char *dest;

	i = 0;
	while (src[i] && spacejam(src[i]) == 0)
	i++;
	dest = malloc(sizeof(char) * i + 1);
	dest = ft_strncpy(dest, src, i);
	return dest;
}

char **ft_split(char *str)
{
	int i;
	int size;
	char **dest;

	i = 0;
	size = wordcount(str);
	dest = malloc(sizeof(char *) * size + 1);
	dest[size] = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] && spacejam(str[i]) == 1)
		i++;
		if (str[i] && spacejam(str[i]) == 0)
		{
			dest[size] = strduper(str + i);
			size++;
		}
		while (str[i] && spacejam(str[i]) == 0)
		i++;
	}
	return dest;
}

int		main(int ac, char **av)
{
	char **arr;

	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
	arr = ft_split(phrase);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
}
