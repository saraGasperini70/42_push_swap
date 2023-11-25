#include "includes/push_swap.h"

void    ft_rrr(t_stack **stack_a, t_stack **stack_b, int checker)
{
    ft_revrot(stack_a);
    ft_revrot(stack_b);
	if (checker == 0)
    	ft_putstr_fd("rrr\n", 1);
}

void    ft_rrb(t_stack **stack_b, int checker)
{
    ft_revrot(stack_b);
	if (checker == 0)
    	ft_putstr_fd("rrb\n", 1);
}

void    ft_rra(t_stack **stack_a, int checker)
{
    ft_revrot(stack_a);
	if (checker == 0)
    	ft_putstr_fd("rra\n", 1);
}
