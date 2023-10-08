#include "includes/push_swap.h"

void    ft_pa(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_b, stack_a);
    ft_putstr("pa\n");
}