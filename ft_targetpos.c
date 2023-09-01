#include "includes/push_swap.h"

void    ft_targetpos(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    int     target_pos;

    temp = *stack_b;
    ft_position(stack_a);
    ft_position(stack_b);
    target_pos = 0;
    while (temp)
    {
        target_pos = ft_gettarget(stack_a, temp->index, INT_MAX, target_pos);
        temp->target_pos = target_pos;
        temp = temp->next;
    }    
}