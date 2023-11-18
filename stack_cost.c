#include "includes/push_swap.h"

t_stack *ft_newstack(int val)
{
    t_stack *new;

    new = malloc(sizeof * new);
    if (!new)
        return (NULL);
    new->value = val;
    new->index = 0;
    new->pos = -1;
    new->target_pos = -1;
    new->cost_a = -1;
    new->cost_b = -1;
    new->next = NULL;
    return (new);
}

void    ft_index_value(t_stack *stack_a, int stack_size)
{
    t_stack *ptr;
    t_stack *highest;
    int     value;

    while (--stack_size > 0)
    {
        ptr = stack_a;
        value = INT_MIN;
        highest = NULL;
        while (ptr)
        {
            if (ptr->value == INT_MIN && ptr->index == 0)
                ptr->index = 1;
            if (ptr->value > value && ptr->index == 0)
            {
                value = ptr->value;
                highest = ptr;
                ptr = stack_a;
            }
            else
                ptr = ptr->next;
        }
        if (highest != NULL)
            highest->index = stack_size;
    }
}

int ft_highest_index(t_stack *stack)
{
    int idx;

    idx = stack->index;
    while (stack)
    {
        if (stack->index > idx)
            idx = stack->index;
        stack = stack->next;
    }
    return (idx);
}

void    ft_cheapest(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;
    int     min_cost;
    int     cost_a;
    int     cost_b;

    tmp = *stack_b;
    min_cost = INT_MAX;
    while (tmp)
    {
        if (ft_nbabs(tmp->cost_a) + ft_nbabs(tmp->cost_b) < ft_nbabs(min_cost))
        {
            min_cost = ft_nbabs(tmp->cost_b) + ft_nbabs(tmp->cost_a);
            cost_a = tmp->cost_a;
            cost_b = tmp->cost_b;
        }
        tmp = tmp->next;
    }
    ft_move(stack_a, stack_b, cost_a, cost_b);
}

void    ft_cost(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    int     size_a;
    int     size_b;

    tmp_a = *stack_a;
    tmp_b = *stack_b;
    size_a = ft_stack_size(tmp_a);
    size_b = ft_stack_size(tmp_b);
    while (tmp_b)
    {
        tmp_b->cost_b = tmp_b->pos;
        if (tmp_b->pos > size_b / 2)
            tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
        tmp_b->cost_a = tmp_b->target_pos;
        if (tmp_b->target_pos > size_a / 2)
            tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
        tmp_b = tmp_b->next;
    }
}
