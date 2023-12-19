#include "includes/push_swap.h"

void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack	*to_push;

	if (*src == NULL)
		return ;
	to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	to_push->prev = NULL;
	if (*dest == NULL)
	{
		*dest = to_push;
		to_push->next = NULL;
	}
	else
	{
		to_push->next = *dest;
		to_push->next->prev = to_push;
		*dest = to_push;
	}
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b, int checker)
{
	ft_push(stack_a, stack_b);
	if (checker == 0)
		ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b, int checker)
{
	ft_push(stack_b, stack_a);
	if (checker == 0)
		ft_putstr_fd("pb\n", 1);
}

