#include "includes/push_swap.h"

int ft_sorted(t_stack *stack_a)
{
    while (!stack_a->next == NULL)
    {
        if (stack_a->value > stack_a->next->value)
            return (0);
        else
            stack_a->value = stack_a->next->value
        return (1);
    }
}