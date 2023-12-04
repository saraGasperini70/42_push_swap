#include "includes/push_swap.h"

void	ft_stackappend(t_stack **stack, int nbr)
{
	t_stack *tail;
	t_stack *number;

	if (stack == NULL)
		return ;
	number = malloc(sizeof(t_stack));
	if (!number)
	{
		return ;
	}
	number->next = NULL;
	number->value = nbr;
	if (*stack == NULL)
	{
		*stack = number;
		number->prev = NULL;
	}
	else
	{
		tail = ft_find_last(*stack);
		tail->next = number;
		number->prev = tail;
	}
}

t_stack	*ft_stack_populate(int ac, char **av, int flag_ac)
{
	t_stack	*stack_a;
	long int	nb;
	int		i;

	stack_a = NULL;
	nb = 0;
	i = 1;
	while (i < ac)
	{
		nb = ft_atoi(av[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			ft_error(&stack_a, NULL);
		ft_stackappend(&stack_a, (int)nb);
		i++;
	}
	if (flag_ac == 1)
		while (av)
			free(av);
	return (stack_a);
}

int ft_stack_size(t_stack *stack)
{
	int size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

void	ft_update_stack(t_stack *stack_a, t_stack *stack_b)
{
	ft_current_position(stack_a);
	ft_current_position(stack_b);
	ft_update_stack(stack_a, stack_b);
	ft_set_price(stack_a, stack_b);
	ft_set_cheapest(stack_b);
}
