#include "includes/push_swap.h"

void    ft_rotate_a(t_stack **a, int *cost)
{
    while (*cost)
    {
        if (*cost > 0)
        {
            ft_ra(a);
            (*cost)--;
        }
        else if (*cost < 0)
        {
            ft_rra(a);
            (*cost)++;
        }
    }
}