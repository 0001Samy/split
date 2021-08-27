#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar (str[i]);
		i++;
	}
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

void	match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	if (i == ft_strlen(s1))
		ft_putstr(s1);
		}
}

int main(int ac, char **av)
{
	if (ac == 3)
		match(av[1], av[2]);
	ft_putchar('\n');
	return 0;
}
//
