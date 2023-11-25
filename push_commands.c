#include "includes/push_swap.h"

void    ft_pa(t_stack **stack_a, t_stack **stack_b, int checker)
{
    ft_push(stack_b, stack_a);
	if (checker == 0)
    	ft_putstr_fd("pa\n", 1);
}

void    ft_pb(t_stack **stack_a, t_stack **stack_b, int checker)
{
    ft_push(stack_a, stack_b);
	if (checker == 0)
    	ft_putstr_fd("pb\n", 1);
}

