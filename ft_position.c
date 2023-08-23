#include "includes/push_swap.h"
void    ft_position(t_stack **stack)
{
    t_stack temp;
    int     i;

    temp = *stack;
    i = 0;
    while (temp)
    {
        temp.pos = i;
        temp = temp.next;
        i++;
    }
}