#include "includes/push_swap.h"

void    ft_rotate_b(t_stack **b, int *cost)
{
    while (*cost)
    {
        if (*cost > 0)
        {
            ft_rb(b);
            (*cost)--;
        }
        else if (*cost < 0)
        {
            ft_rra(b);
            (*cost)++;
        }
    }
}