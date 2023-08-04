#include "includes/push_swap.h"

t_stack *ft_stackbottom(t_stack *stack)
{
    while (stack && stack->next != NULL)
        stack = stack->next;
    return (stack);
}