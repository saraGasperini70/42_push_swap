#include "includes/push_swap.h"

void    ft_revrot(t_stack **stack)
{
    t_stack *temp;
    t_stack *tail;
    t_stack *before_tail;

    tail = ft_stackbottom(*stack);
    before_tail = ft_stackbeforebottom(*stack);
    temp = *stack;
    *stack = tail;
    (*stack)->next = temp;
    before_tail->next = NULL;
}