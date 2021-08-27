#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	res = 0;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-res);
	return res;
}

int main(void)
{
	printf("%i\n", ft_atoi("-5254"));
}
