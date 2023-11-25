#include "includes/push_swap.h"

void    ft_sa(t_stack **stack_a, int checker)
{
    ft_swap(*stack_a);
	if (checker == 0)
    	ft_putstr_fd("sa\n", 1);
}

void    ft_sb(t_stack **stack_b, int checker)
{
    ft_swap(*stack_b);
	if (checker == 0)
    	ft_putstr_fd("sb\n", 1);
}

void    ft_ss(t_stack **stack_a, t_stack **stack_b, int checker)
{
    ft_swap(*stack_a);
	ft_swap(*stack_b)
	if (checker == 0)
    	ft_putstr_fd("ss\n", 1);
}
