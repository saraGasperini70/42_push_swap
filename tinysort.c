/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgasperi <sgasperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:49:37 by sgasperi          #+#    #+#             */
/*   Updated: 2024/01/02 16:27:07 by sgasperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*char	**ft_argument_check(int ac, char **av)
{
	char	**matrix;
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (matrix[i])
		{
			if (ft_isnumber(matrix[i]) == 0)
				ft_error(NULL, NULL, matrix);
			i++;
		}
	}
	else
		matrix = av;
	if (!ft_check_input(matrix))
		ft_error(NULL, NULL, matrix);
	return (matrix);
}*/

t_stack	*ft_find_highest(t_stack *stack)
{
	int		highest_value;
	t_stack	*highest;

	if (stack == NULL)
		return (NULL);
	highest_value = INT_MIN;
	while (stack)
	{
		if (stack->value > highest_value)
		{
			highest_value = stack->value;
			highest = stack;
		}
		stack = stack->next;
	}
	return (highest);
}

void	ft_tinysort(t_stack **stack)
{
	t_stack	*highest;

	if (ft_sorted(*stack))
		return ;
	highest = ft_find_highest(*stack);
	if (*stack == highest)
		ft_ra(stack, 0);
	else if ((*stack)->next == highest)
		ft_rra(stack, 0);
	if ((*stack)->value > (*stack)->next->value)
		ft_sa(stack, 0);
}
