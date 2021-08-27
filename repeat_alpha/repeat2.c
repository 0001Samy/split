#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char *repeat(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a';
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A';
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return str;
}

int main(int ac, char **av)
{
	if (ac == 2)
		repeat(av[1]);
	else
		ft_putchar('\n');
		return 0;
}
