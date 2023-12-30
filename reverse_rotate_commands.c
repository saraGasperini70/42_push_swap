#include "includes/push_swap.h"

void	ft_revrotate_both(t_stack **stack_a, t_stack **stack_b,
	t_stack *cheapest)
{
	if (*stack_a != cheapest->target_pos && *stack_b != cheapest)
		ft_rrr(stack_a, stack_b, 0);
	ft_current_position(*stack_a);
	ft_current_position(*stack_b);
}

void	ft_reverse_rot(t_stack **stack)
{
	t_stack	*last;
	int		stack_len;

	stack_len = ft_stack_size(*stack);
	if (*stack == NULL || stack == NULL || stack_len == 1)
		return ;
	last = ft_find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int checker)
{
	ft_reverse_rot(stack_a);
	ft_reverse_rot(stack_b);
	if (checker == 0)
		ft_putstr_fd("rrr\n", 1);
}

void	ft_rrb(t_stack **stack_b, int checker)
{
	ft_reverse_rot(stack_b);
	if (checker == 0)
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rra(t_stack **stack_a, int checker)
{
	ft_reverse_rot(stack_a);
	if (checker == 0)
		ft_putstr_fd("rra\n", 1);
}
