#include "includes/push_swap.h"

void    ft_move(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b)
{
    if (cost_a < 0 && cost_b < 0)
        ft_revrot_both(stack_a, stack_b, &cost_a, &cost_b);
    else if (cost_a > 0 && cost_b > 0)
        ft_rotate_both(stack_a, stack_b, &cost_a, &cost_b);
    ft_rotate_a(stack_a, &cost_a);
    ft_rotate_b(stack_b, &cost_b);
    ft_pa(stack_a, stack_b);
}

void    ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
    while (ft_stack_size(*stack_a) > 3)
    {
        ft_targetpos(*stack_a, *stack_b);
        ft_end_rotation(stack_a, ft_find_smallest(*stack_a), 'a');
    }
    ft_pb(stack_b, stack_a);
}

void    ft_sort(t_stack **stack_a, t_stack **stack_b)
{
    t_stack	*smallest;
    int len_a;

    len_a = ft_stack_size(*stack_a);
    if (len_a == 5)
        ft_sort_five(stack_a, stack_b);
    else
    {
        while (len_a-- > 3)
            ft_pb(stack_a, stack_b);
    }
    ft_tinysort(stack_a);
    ft_targetpos(stack_a, stack_b);
    if (!ft_sorted(*stack_a))
        ft_shiftstack(stack_a);
}

void ft_sort_algo(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
    if (stack_size == 2 && !ft_sorted(*stack_a))
        ft_sa(stack_a);
    else if (stack_size == 3)
        ft_tinysort(stack_a);
    else if (stack_size > 3 && !ft_sorted(*stack_a))
        ft_sort(stack_a, stack_b);
}
