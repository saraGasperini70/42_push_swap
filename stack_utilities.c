#include "includes/push_swap.h"

int ft_stack_size(t_stack *stack)
{
    int size;

    size = 0;
    if (!stack)
        return (0);
    while (stack)
    {
        stack = stack->next;
        size++;
    }
    return (size);
}

t_stack *ft_stackbottom(t_stack *stack)
{
    while (stack && stack->next != NULL)
        stack = stack->next;
    return (stack);
}

void    ft_stackappend(t_stack **stack, t_stack *new)
{
    t_stack *tail;

    if (!new)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    tail = ft_stackbottom(*stack);
    tail->next = new;
}

t_stack *ft_stackbeforebottom(t_stack *stack)
{
    while (stack && stack->next && stack->next->next != NULL)
        stack = stack->next;
    return (stack);
}

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
