#include "includes/push_swap.h"

void    ft_rrb(t_stack **stack_b)
{
    ft_revrot(stack_b);
    ft_putstr_fd("rrb\n", 1);
}
