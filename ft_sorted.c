#include "includes/push_swap.h"

int ft_sorted(t_stack *stack_a)
{
    while (stack_a->next != NULL)
    {
        if (stack_a->value > stack_a->next->value)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}