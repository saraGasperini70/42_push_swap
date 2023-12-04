#include "includes/push_swap.h"

t_stack	*ft_find_cheapest(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->is_cheapest == 1)
			return (stack);
		stack = stack->next;
	}
	return NULL;
}

void    ft_set_cheapest(t_stack *stack_b)
{
	long	best_match_value;
	t_stack	*best_match_stack;

	if (stack_b == NULL)
		return ;
	best_match_value = LONG_MAX;
	while (stack_b)
	{
		if (stack_b->cost < best_match_value)
		{
			best_match_value = stack_b->cost;
			best_match_stack = stack_b;
		}
		stack_b = stack_b->next;
	}
	best_match_stack->is_cheapest = 1;
}

void    ft_set_price(t_stack *stack_a, t_stack *stack_b)
{
	int	len_a;
	int	len_b;

	len_a = ft_stack_size(stack_a);
	len_b = ft_stack_size(stack_b);
	while (stack_b)
	{
		stack_b->cost = len_b - stack_b->current_pos;
		if (stack_b->above_median == 0)
			stack_b->cost = len_b- (stack_b->current_pos);
		if (stack_b->above_median == 1)
			stack_b->cost += stack_b->target_pos->current_pos;
		else
			stack_b->cost += len_a - (stack_b->target_pos->current_pos);
		stack_b = stack_b->next;
	}
}
