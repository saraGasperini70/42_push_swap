#include "includes/push_swap.h"

void    ft_revrot_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
    while (*cost_a < 0 && *cost_b < 0)
    {
        (*cost_a)++;
        (*cost_b)++;
        ft_rrr(a, b);
    }
}