#include "includes/push_swap.h"


void    ft_sort(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *smallest;
    int len_a;

    len_a = ft_stack_size(*stack_a);
    if (len_a == 5)
        ft_sort_five(stack_a);
    else
    {
        while (len_a-- > 3)
            ft_pb(stack_a, stack_b);
    }
    ft_tinysort(*stack_a);
    while (*stack_b)
    {
        ft_targetpos(stack_a, stack_b);
        ft_move(stack_a, stack_b);
    }
    if (!ft_sorted(*stack_a))
        ft_shiftstack(stack_a);
}
