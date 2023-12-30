#include "includes/push_swap.h"

char	**ft_argument_check(int ac, char **av)
{
	char	**matrix;

	if (ac == 2)
		matrix = ft_split(av[1], ' ');
	else
		matrix = av;
	if (!ft_check_input(matrix))
		ft_error(NULL, NULL);
	return (matrix);
}

t_stack	*ft_find_highest(t_stack *stack)
{
	int		highest_value;
	t_stack	*highest;

	if (stack == NULL)
		return (NULL);
	highest_value = INT_MIN;
	while (stack)
	{
		if (stack->value > highest_value)
		{
			highest_value = stack->value;
			highest = stack;
		}
		stack = stack->next;
	}
	return (highest);
}

void	ft_tinysort(t_stack **stack)
{
	t_stack	*highest;

	if (ft_sorted(*stack))
		return ;
	highest = ft_find_highest(*stack);
	if (*stack == highest)
		ft_ra(stack, 0);
	else if ((*stack)->next == highest)
		ft_rra(stack, 0);
	if ((*stack)->value > (*stack)->next->value)
		ft_sa(stack, 0);
}
