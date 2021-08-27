#include <unistd.h>

void ft_putchar(char c)
{	
	write(1, &c, 1);
}

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

int check(char *str, int n, char c)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

void	interd(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (check(s2, ft_strlen(s2), s1[i]) && check(s1, i, s1[i]) == 0)
			ft_putchar(s1[i]);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 3)
		interd(av[1], av[2]);
	ft_putchar('\n');
	return 0;
}
