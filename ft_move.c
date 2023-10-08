#include "includes/push_swap.h"

void    ft_move(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b)
{
    if (cost_a < 0 && cost_b < 0)
        ft_revrot_both(stack_a, stack_b, &cost_a, &cost_b);
    else if (cost_a > 0 && cost_b > 0)
        ft_rotate_both(stack_a, stack_b, &cost_a, &cost_b);
    ft_rotate_a(stack_a, &cost_a);
    ft_rotate_b(stack_b, &cost_b);
    ft_pa(stack_a, stack_b);
}