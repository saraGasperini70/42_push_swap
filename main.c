#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;

	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	if (!ft_check_input(av))
		ft_error(NULL, NULL);
	stack_b = NULL;
	stack_a = ft_stack_populate(ac, av);
	if (!ft_sorted(stack_a))
	{
		if (ft_stack_size(stack_a) == 2)
			ft_sa(&stack_a);
		else if (ft_stack_size(stack_a) == 3)
			ft_tinysort(&stack_a);
		else
			ft_sort(&stack_a, &stack_b);
	}
	free_alloc(&stack_a);
}
