/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgasperi <sgasperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:49:31 by sgasperi          #+#    #+#             */
/*   Updated: 2024/01/02 11:49:32 by sgasperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_swap(t_stack **head)
{
	int	len_head;

	len_head = ft_stack_size(*head);
	if (*head == NULL || head == NULL || len_head == 1)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	ft_sa(t_stack **stack_a, int checker)
{
	ft_swap(stack_a);
	if (checker == 0)
		ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack **stack_b, int checker)
{
	ft_swap(stack_b);
	if (checker == 0)
		ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, int checker)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	if (checker == 0)
		ft_putstr_fd("ss\n", 1);
}
