#include "includes/push_swap.h"

void    ft_rr(t_stack **stack_a, t_stack **stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    ft_putstr("rr\n"); 
}