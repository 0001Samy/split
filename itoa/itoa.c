#include <stdlib.h>
#include <stdio.h>

int coco(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return i;
}

char *ft_itoa(int nbr)
{
	int i;
	int n;
	char *dest;
	int nb;

	i = 0;
	nb = nbr;
	n = coco(nb);
	dest = malloc(sizeof(char) * n + 1);
	if (!dest)
		return NULL;
	dest[n] = '\0';
	if (nb < 0)
	{
		dest[i] = '-';
		nb = -nb;
		i++;
	}
	while (i != n)
	{
		dest[n - 1] = (nb % 10) + '0';
		nb = nb / 10;
		n--;
	}
	return dest;
}

int main(void)
{
	printf("%s", ft_itoa(42));
}
