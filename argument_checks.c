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

void	ft_arg_check_1(int ac, char **av, t_stack **stack_a)
{
	char	**matrix;
	int		i;
	int		size;

	i = 0;
	while (av[i])
	{
		if (ft_strcmp(av[i], " "))
		{
			matrix = ft_split(av[1], ' ');
		}
		else
		{
			*matrix = av[1];
		}
		i++;
		size = ft_matrix_size(matrix);
		*stack_a = ft_stack_populate(size, matrix, ac == 2);
		ft_free_matrix(matrix);
		if (matrix == NULL)
			ft_error(NULL, NULL, matrix);
	}
}

void	ft_arg_check_misc(int ac, char **av, t_stack **stack_a)
{
	*stack_a = ft_stack_populate(ac, av, ac == 2);
}
