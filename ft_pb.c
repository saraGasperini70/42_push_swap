#include "includes/push_swap.h"

void    ft_pb(t_stack **stack_a, t_stack **stack_b)
{
    ft_push(stack_a, stack_b);
    ft_putstr_fd("pb\n", 1);
}
