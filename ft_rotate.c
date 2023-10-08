#include "includes/push_swap.h"

void    ft_rotate(t_stack **stack)
{
    t_stack *tail;
    t_stack *tmp;

    tmp = *stack;
    *stack = (*stack)->next;
    tail = ft_stackbottom(*stack);
    tmp->next = NULL;
    tail->next = tmp;
}