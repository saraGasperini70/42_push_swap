#include "includes/push_swap.h"
int ft_lowestposindex(t_stack **stack)
{
    t_stack *temp;
    int lowest_index;
    int lowest_pos;

    temp = *stack;
    lowest_index = INT_MAX;
    ft_position(stack);
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