#include "includes/push_swap.h"

void    ft_error(t_stack **stack_a, t_stack **stack_b)
{
    if (stack_a == NULL || *stack_a != NULL)
        free_alloc(stack_a);
    if (stack_b == NULL || *stack_b != NULL)
        free_alloc(stack_b);
    write(2, "Error\n", 6);
    exit(1);
}
