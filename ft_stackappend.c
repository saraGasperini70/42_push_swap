#include "includes/push_swap.h"

void    ft_stackappend(t_stack **stack, t_stack *new)
{
    t_stack *tail;

    if (!new)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    tail = ft_stackbottom(*stack);
    tail->next = new;
}