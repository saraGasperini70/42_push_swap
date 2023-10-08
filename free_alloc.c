#include "includes/push_swap.h"

void    free_alloc(t_stack **stack)
{
    t_stack *temp;

    if (!stack || !(*stack))
        return ;
    while (*stack)
    {
        temp = (*stack)->next;
        free(*stack);
        *stack = temp; 
    }
    *stack = NULL;
}