#include "includes/push_swap.h"

void	ft_end_rotate(t_stack **stack, t_stack *top, char stack_name)
{
	while (*stack != top)
	{
		if (stack_name == 'a')
		{
			if (top->above_median == 1)
			{
				ft_ra(stack, 0);
			}
			else
			{
				ft_rra(stack, 0);
			}
		}
		else if (stack_name == 'b')
		{
			if (top->above_median == 1)
				ft_rb(stack, 0);
			else
				ft_rrb(stack, 0);
		}
	}
}

void	ft_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheapest;

	cheapest = ft_find_cheapest(*stack_b);
	if (cheapest->above_median == 1
		&& cheapest->target_pos->above_median == 1)
		ft_rotate_both(stack_a, stack_b, cheapest);
	else if (!(cheapest->above_median == 1
		&& cheapest->target_pos->above_median == 1))
		ft_rotate_both(stack_a, stack_b, cheapest);
	ft_end_rotate(stack_b, cheapest, 'b');
	ft_end_rotate(stack_a, cheapest->target_pos, 'a');
	ft_pa(stack_a, stack_b, 0);
}

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_stack_size(*stack_a) > 3)
	{
		ft_update_stack(*stack_a, *stack_b);
		ft_end_rotate(stack_a, ft_find_smallest(*stack_a), 'a');
		ft_pb(stack_b, stack_a, 0);
		break ;
	}
}

/*L'algoritmo di sorting:
se la dimensione della stack è cinque, utilizza una funzione apposita,
altrimenti pusha tutto su stack_b, tranne tre numeri,
su cui performa un piccolo algoritmo di sorting, per ridurre il numero di mosse;
re-inizializza i numeri in stack_b, assegnando un target in stack_a ,
muove i numeri con il costo minore in mosse;*/
void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*smallest;
	int		len_a;

	len_a = ft_stack_size(*stack_a);
	/*if (len_a == 5)
		ft_sort_five(stack_a, stack_b);
	else
	{*/
	while (len_a-- > 3)
		ft_pb(stack_a, stack_b, 0);
	ft_tinysort(stack_a);
	while (*stack_b)
	{
		ft_update_stack(*stack_a, *stack_b);
		ft_move(stack_a, stack_b);
	}
	ft_current_position(*stack_a);
	smallest = ft_find_smallest(*stack_a);
	if (smallest->above_median == 1)
	{
		while (*stack_a != smallest)
			ft_ra(stack_a, 0);
	}
	else
	{
		while (*stack_a != smallest)
			ft_rra(stack_a, 0);
	}
}
