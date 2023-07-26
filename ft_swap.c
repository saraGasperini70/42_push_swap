#include "includes/push_swap.h"

void    ft_swap(t_stack *stack)
{
    int temp;

    if (stack == NULL || stack->next == NULL)
        return ;
    temp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp;
    temp = stack->index;
    stack->index = stack->next->index;
    stack->next->index = temp;
}