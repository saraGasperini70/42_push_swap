/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgasperi <sgasperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:48:59 by sgasperi          #+#    #+#             */
/*   Updated: 2024/01/02 11:49:00 by sgasperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest)
{
	if (*stack_a != cheapest->target_pos && *stack_b != cheapest)
		ft_rr(stack_a, stack_b, 0);
	ft_current_position(*stack_a);
	ft_current_position(*stack_b);
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*last;
	int		stack_len;

	stack_len = ft_stack_size(*stack);
	if (*stack == NULL || stack == NULL || stack_len == 1)
		return ;
	last = ft_find_last(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

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
