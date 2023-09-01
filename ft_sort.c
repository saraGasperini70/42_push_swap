#include "includes/push_swap.h"

void    ft_sort(t_stack **stack_a, t_stack **stack_b)
{
    ft_pushallnotthree(stack_a, stack_b);
    ft_tinysort(stack_a);
    while (*stack_b)
    {
        ft_targetpos(stack_a, stack_b);
        ft_cost(stack_a, stack_b);
        ft_cheapest(stack_a, stack_b);
    }
    if (!ft_sorted(*stack_a))
        ft_shiftstack(stack_a);
}