#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('z' - (str[i] - 'a'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('Z' - (str[i] - 'A'));
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if ( ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return 0;
}
