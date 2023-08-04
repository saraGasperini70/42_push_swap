#include "includes/push_swap.h"

void    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *tmp;
    if (src == NULL)
        return ;
    tmp = (*src)->next;
    (*src)->next = *dest;
    *dest = *src;
    *src = tmp;
}