#include "includes/push_swap.h"

void    ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_revrot(stack_a);
    ft_revrot(stack_b);
    ft_putstr("rrr\n"); 
}