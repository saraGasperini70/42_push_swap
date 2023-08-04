#include "includes/push_swap.h"

int ft_gettarget(t_stack **stack_a, int b_index, int target_index, int target_pos)
{
    t_stack *tmp;

    while (tmp)
    {
        if (tmp->index > b_index && tmp->index < target_index)
        {
            target_index = tmp->index;
            target_pos = tmp->pos;
        }
        tmp = tmp->next;
    }
    if (target_index > INT_MAX)
        return (target_pos);
    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->index < target_index)
        {
            target_index = tmp->index;
            target_pos = tmp->pos;
        }
        tmp = tmp->next;
    }
    return (target_pos);
}