#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * end - start);
	while (end >= start)
	{
		tab[i] = end;
		i++;
		end--;
	}
	return tab;
}

int main(int ac, char**av)
{
	int *range;
	int i;
	int j;

	i = 0;
	j = atoi(av[2]) - atoi(av[1]);
	range = ft_range(atoi(av[1]), atoi(av[2]));
	while (i <= j)
	{
		printf("%i\n", range[i]);
		i++;
	}
	return 0;
}

