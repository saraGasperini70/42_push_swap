#include "includes/push_swap.h"
void    ft_shiftstack(t_stack **stack_a)
{
    int lowest_pos;
    int stack_size;

    stack_size = ft_stack_size(*stack_a);
    lowest_pos = ft_lowestposindex(stack_a);
    if (lowest_pos > stack_size / 2)
    {
        while (lower_pos < stack_size)
        {
            ft_rra(stack_a);
            lowest_pos++;
        }
    }
    else
    {
        while (lowest_pos > 0)
        {
            ft_ra(stack_a);
            lowest_pos--;
        }
    }
}