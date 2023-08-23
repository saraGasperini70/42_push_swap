#include "includes/push_swap.h"
void    ft_cheapest(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;
    int     min_cost;
    int     cost_a;
    int     cost_b;

    tmp = *stack_b;
    min_cost = INT_MAX;
    while (tmp)
    {
        if (ft_nbabs(tmp->cost_a) + ft_nbabs(tmp->cost_b) == ft_nbabs(min_cost))
        {
            min_cost = ft_nbabs(tmp->cost_a) + ft_nbabs(tmp->cost_b);
            cost_a = tmp->cost_a;
            cost_b = tmp->cost_b;
        }
        tmp = tmp->next;
    }
    ft_move(stack_a, stack_b, cost_a, cost_b);
}