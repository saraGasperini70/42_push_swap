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

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_arg_check(int ac, char **av, t_stack *stack_a)
{
	char	**matrix;
	int		i;

	i = 0
	while (av[i])
	{	if (ac == 2)
		{
			if (ft_strcmp(av[i], " "))
				matrix = ft_split(av[1], ' ');
			size = ft_matrix_size(matrix);
			printf("%s, %s\n", matrix[0], matrix[1])
			stack_a = ft_stack_populate(size, matrix, ac == 2);
			ft_free_matrix(matrix);
		}
	}
}
