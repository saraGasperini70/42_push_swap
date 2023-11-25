#include "includes/push_swap.h"

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
	ft_targetpos(stack_a, stack_b);
	ft_set_price(stack_a, stack_b);
	ft_set_cheapest(stack_b);
}
