/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgasperi <sgasperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:49:17 by sgasperi          #+#    #+#             */
/*   Updated: 2024/01/02 11:49:18 by sgasperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_current_position(t_stack *stack)
{
	int	i;
	int	centre_line;

	i = 0;
	if (stack == NULL)
		return ;
	centre_line = ft_stack_size(stack) / 2;
	while (stack)
	{
		stack->current_pos = i;
		if (i <= centre_line)
			stack->above_median = 1;
		else
			stack->above_median = 0;
		stack = stack->next;
		++i;
	}
}

t_stack	*ft_find_last(t_stack *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

t_stack	*ft_find_smallest(t_stack *stack)
{
	long	smallest_value;
	t_stack	*smallest;

	if (stack == NULL)
		return (NULL);
	smallest_value = LONG_MAX;
	while (stack)
	{
		if (stack->value < smallest_value)
		{
			smallest_value = stack->value;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}
