/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgasperi <sgasperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:48:40 by sgasperi          #+#    #+#             */
/*   Updated: 2024/01/02 16:34:36 by sgasperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	if (ac == 2)
		ft_arg_check_1(ac, av, &stack_a);
	else
		ft_arg_check_misc(ac, av, &stack_a);
	stack_b = NULL;
	if (!ft_sorted(stack_a))
	{
		if (ft_stack_size(stack_a) == 2)
			ft_sa(&stack_a, 0);
		else if (ft_stack_size(stack_a) == 3)
			ft_tinysort(&stack_a);
		else
			ft_sort(&stack_a, &stack_b);
	}
	free_alloc(&stack_a);
}
