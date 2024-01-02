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
	char	**new_matrix;
	int		size;

	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	ft_ft_arg_check(ac, av, stack_a);
	//new_matrix = ft_argument_check(ac, av);
	//size = ft_matrix_size(new_matrix);
	stack_b = NULL;
	//stack_a = ft_stack_populate(size, new_matrix, ac == 2);
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
