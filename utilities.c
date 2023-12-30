#include "includes/push_swap.h"

int	ft_matrix_size(char **new_matrix)
{
	int	i;

	i = 0;
	while (new_matrix[i])
	{
		i++;
	}
	return (i);
}

void	ft_free_matrix(char **av)
{
	int	i;

	i = 0;
	if (av == NULL || *av == NULL)
		return ;
	while (av[i])
		free(av[i++]);
	free(av[i]);
}

void	free_alloc(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*curr;

	if (stack == NULL || (*stack) == NULL)
		return ;
	curr = *stack;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	*stack = NULL;
}

long	ft_atoi(const char *str)
{
	int		c;
	int		neg;
	long	n;

	c = 0;
	neg = 1;
	n = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
	{
		c++;
	}
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			neg *= -1;
		c++;
	}
	while (str[c] >= 48 && str[c] <= 57)
	{
		n = n * 10 + str[c] - 48;
		c++;
	}
	return (n * neg);
}

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}
