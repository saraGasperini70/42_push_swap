#include "includes/push_swap.h"

void    ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_revrot(stack_a);
    ft_revrot(stack_b);
    ft_putstr_fd("rrr\n", 1);
}

void    ft_rrb(t_stack **stack_b)
{
    ft_revrot(stack_b);
    ft_putstr_fd("rrb\n", 1);
}

void    ft_rra(t_stack **stack_a)
{
    ft_revrot(stack_a);
    ft_putstr_fd("rra\n", 1);
}

void    ft_revrot_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
    while (*cost_a < 0 && *cost_b < 0)
    {
        (*cost_a)++;
        (*cost_b)++;
        ft_rrr(a, b);
    }
}

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
