#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}
char    *ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	if (!dest)
		return NULL;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1)
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
