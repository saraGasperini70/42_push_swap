#include "includes/push_swap.h"

t_stack *ft_stackbeforebottom(t_stack *stack)
{
    while (stack && stack->next && stack->next->next != NULL)
    {
        stack = stack->next;
    }
    return (stack);
}