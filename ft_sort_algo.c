#include "includes/push_swap.h"

void ft_sort_algo(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
    if (stack_size == 2 && !ft_sorted(*stack_a))
        ft_sa(stack_a);
    else if (stack_size == 3)
        ft_tinysort(stack_a);
    else if (stack_size > 3 && !ft_sorted(*stack_a))
        ft_sort(stack_a, stack_b);
}