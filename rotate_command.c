#include "includes/push_swap.h"

void    ft_rb(t_stack **stack_b)
{
    ft_rotate(stack_b);
    ft_putstr_fd("rb\n", 1);
}

void    ft_ra(t_stack **stack_a)
{
    ft_rotate(stack_a);
    ft_putstr_fd("ra\n", 1);
}

void    ft_rr(t_stack **stack_a, t_stack **stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    ft_putstr_fd("rr\n", 1);
}

void    ft_rotate_a(t_stack **a, int *cost)
{
    while (*cost)
    {
        if (*cost > 0)
        {
            ft_ra(a);
            (*cost)--;
        }
        else if (*cost < 0)
        {
            ft_rra(a);
            (*cost)++;
        }
    }
}

void    ft_rotate_b(t_stack **b, int *cost)
{
    while (*cost)
    {
        if (*cost > 0)
        {
            ft_rb(b);
            (*cost)--;
        }
        else if (*cost < 0)
        {
            ft_rrb(b);
            (*cost)++;
        }
    }
}

void    ft_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
    while (*cost_a > 0 && *cost_b > 0)
    {
        (*cost_a)--;
        (*cost_b)--;
        ft_rr(a, b);
    }
}

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
