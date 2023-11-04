#include "includes/push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int stack_size;

    if (ac < 2)
        return (0);
    if (!ft_check_input(av))
    {
        //printf("Hello");
        ft_error(NULL, NULL);
    }
    stack_b = NULL;
    stack_a = ft_stack_populate(ac, av);
    stack_size = ft_stack_size(stack_a);
    ft_index_value(stack_a, stack_size +1);
    ft_sort_algo(&stack_a, &stack_b, stack_size);
    free_alloc(&stack_a);
    free_alloc(&stack_b);
    return (0);    
}