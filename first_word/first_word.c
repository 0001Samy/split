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
		ft_putchar(str[i]);
		i++;
	}
}
int main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] && av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{	
			ft_putchar(av[1][i]);
			i++;
		}
			
	}
	ft_putchar('\n');
	return (0);
}
