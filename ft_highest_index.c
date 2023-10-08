#include "includes/push_swap.h"

int ft_highest_index(t_stack *stack)
{
    int idx;

    idx = stack->index;
    while (stack)
    {
        if (stack->index > idx)
            idx = stack->index;
        stack = stack->next;
    }
    return (idx);
}