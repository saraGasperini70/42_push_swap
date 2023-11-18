#include "includes/push_swap.h"

void    ft_position(t_stack **stack)
{
    t_stack *temp;
    int     i;

    temp = *stack;
    i = 0;
    while (temp)
    {
        temp->pos = i;
        temp = temp->next;
        i++;
    }
}
int ft_lowestposindex(t_stack **stack)
{
    t_stack *temp;
    int lowest_index;
    int lowest_pos;

    temp = *stack;
    lowest_index = INT_MAX;
    ft_position(stack);
    lowest_pos = temp->pos;
    while (temp)
    {
        if (temp->index < lowest_index)
        {
            lowest_index = temp->index;
            lowest_pos = temp->pos;
        }
        temp = temp->next;
    }
    return (lowest_pos);
}

void    ft_shiftstack(t_stack **stack_a)
{
    int lowest_pos;
    int stack_size;

    stack_size = ft_stack_size(*stack_a);
    lowest_pos = ft_lowestposindex(stack_a);
    if (lowest_pos > stack_size / 2)
    {
        while (lowest_pos < stack_size)
        {
            ft_rra(stack_a);
            lowest_pos++;
        }
    }
    else
    {
        while (lowest_pos > 0)
        {
            ft_ra(stack_a);
            lowest_pos--;
        }
    }
}

int ft_gettarget(t_stack **stack_a, int b_index, int target_index, int target_pos)
{
    t_stack *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->index > b_index && tmp->index < target_index)
        {
            target_index = tmp->index;
            target_pos = tmp->pos;
        }
        tmp = tmp->next;
    }
    if (target_index > INT_MAX)
        return (target_pos);
    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->index < target_index)
        {
            target_index = tmp->index;
            target_pos = tmp->pos;
        }
        tmp = tmp->next;
    }
    return (target_pos);
}

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
