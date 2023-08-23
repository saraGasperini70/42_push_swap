#include "includes/push_swap.h"

void    ft_tinysort(t_stack **stack)
{
    int highest;

    if (ft_sorted(*stack))
        return ;
    highest = ft_highest_index(*stack);
    if ((*stack)->index == highest)
        ft_ra(stack);
    else if ((*stack)->next->index == highest)
        ft_rra(stack);
    if ((*stack)->index > (*stack)->next->index)
        ft_sa(stack);
}