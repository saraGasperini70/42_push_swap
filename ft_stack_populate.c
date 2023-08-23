#include "includes/push_swap.h"

t_stack *ft_stack_populate(int ac, char **av)
{
    t_stack     *stack_a;
    long int    nb;
    int         i;

    stack_a = NULL;
    nb = 0;
    i = 1;
    while (i < ac)
    {
        nb = ft_atoi(av[i]);
        if (nb > INT_MAX || nb < INT_MIN)
            ft_error(&stack_a, NULL);
        if (i == 1)
            stack_a = ft_newstack((int)nb);
        else
            ft_stackappend(&stack_a, ft_newstack((int)nb));
        i++;
    }
    return (stack_a);
}