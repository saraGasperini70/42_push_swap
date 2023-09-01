#include "includes/push_swap.h"

void    ft_pushallnotthree(t_stack **stack_a, t_stack **stack_b)
{
    int stack_size;
    int pushed_val;
    int i;

    stack_size = ft_stack_size(*stack_a);
    pushed_val = 0;
    i = 0;
    while (stack_size > 6 && i < stack_size && pushed_val < stack_size / 2)
    {
        if ((*stack_a)->index <= stack_size / 2)
        {
            ft_pb(stack_a, stack_b);
            pushed_val++;
        }
        else
            ft_ra(stack_a);
        i++;
    }
    while (stack_size - pushed_val > 3)
    {
        ft_pb(stack_a, stack_b);
        pushed_val++;
    }
}