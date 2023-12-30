#include "includes/push_swap.h"

void	ft_set_target(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current_a;
	t_stack	*target;
	long	best_match;

	while (stack_b)
	{
		best_match = LONG_MAX;
		current_a = stack_a;
		while (current_a)
		{
			if (current_a->value > stack_b->value
				&& current_a->value < best_match)
			{
				best_match = current_a->value;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match == LONG_MAX)
			stack_b->target_pos = ft_find_smallest(stack_a);
		else
			stack_b->target_pos = target;
		stack_b = stack_b->next;
	}
}

void	ft_stackappend(t_stack **stack, int nbr)
{
	t_stack	*tail;
	t_stack	*number;

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
	t_stack		*stack_a;
	long int	nb;
	int			i;

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
		ft_free_matrix(av);
	return (stack_a);
}

int	ft_stack_size(t_stack *stack)
{
	int	size;

	if (stack == NULL)
		return (0);
	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	ft_update_stack(t_stack *stack_a, t_stack *stack_b)
{
	ft_current_position(stack_a);
	ft_current_position(stack_b);
	ft_set_target(stack_a, stack_b);
	ft_set_price(stack_a, stack_b);
	ft_set_cheapest(stack_b);
}
