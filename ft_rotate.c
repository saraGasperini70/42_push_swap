#include "includes/push_swap.h"

void    ft_rotate(t_stack **stack)
{
    t_stack *tail;
    t_stack *tmp;

    if (stack == NULL || *stack == NULL)
        return ;
    tail = ft_stackbottom(*stack);
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = NULL;
    tail->next = tmp;
}
