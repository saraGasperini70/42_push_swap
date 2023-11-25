#include "includes/push_swap.h"

void	ft_rb(t_stack **stack_b, int checker)
{
	ft_rotate(stack_b);
	if (checker == 0)
		ft_putstr_fd("rb\n", 1);
}

void	ft_ra(t_stack **stack_a, int checker)
{
	ft_rotate(stack_a);
	if (checker == 0)
		ft_putstr_fd("ra\n", 1);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, int checker)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if (checker == 0)
		ft_putstr_fd("rr\n", 1);
}

void	ft_end_rotate(t_stack **stack, t_stack **top, char stack_name)
{
	if (stack != top)
	{
		if (stack_name == 'a')
		{
			if (top->above_median == 1)
				ft_ra(stack);
			else
				ft_rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top->above_median == 1)
				ft_rb(stack);
			else
				ft_rrb(stack);
		}
	}
}
