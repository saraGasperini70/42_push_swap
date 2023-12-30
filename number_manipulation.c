#include "includes/push_swap.h"

int	ft_isnumber(char *av)
{
	int	i;

	i = 0;
	if (ft_issign(av[i]) && av[i + 1] != '\0')
	{
		i++;
	}
	while (av[i] && ft_isdigit(av[i]))
	{
		i++;
	}
	if (av[i] != '\0' && !ft_isdigit(av[i]))
	{
		return (0);
	}
	return (1);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_nbabs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

int	ft_nbrcmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}
