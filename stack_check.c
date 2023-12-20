#include "includes/push_swap.h"


void    ft_error(t_stack **stack_a, t_stack **stack_b)
{
    if (stack_a == NULL || *stack_a == NULL)
        free_alloc(stack_a);
    if (stack_b == NULL || *stack_b == NULL)
        free_alloc(stack_b);
    write(2, "Error\n", 6);
    exit(1);
}

int ft_arg_zero(char *av)
{
    int i;

    i = 0;
    if (ft_issign(av[i]))
    {
        i++;
    }
    while (av[i] && av[i] == '0')
        i++;
    if (av[i] != '\0')
        return (0);
    return (1);
}

int ft_duplicates(char **av)
{
    int i;
    int j;

    i = 0;
    while (av[i])
    {
        j = i + 1;
        while (av[j])
        {
            if (j != i && ft_nbrcmp(av[i], av[j]) == 0)
            {
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}

int ft_sorted(t_stack *stack_a)
{
	if (stack_a == NULL)
		return (1);
    while (stack_a->next)
    {
        if (stack_a->value > stack_a->next->value)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}

/*
Funzione di check degli argomenti di input: verifica che siano tutti numeri e restituisce 1, altrimemti restituisce 0
*/
int ft_check_input(char **av)
{
    int i;
    int nb_zeros;

    nb_zeros = 0;
    i = 1;
    while (av[i])
    {
        if (!ft_isnumber(av[i]))
        {
            return (0);
        }
        nb_zeros += ft_arg_zero(av[i]);
        i++;
    }
    if (nb_zeros > 1)
    {
        return (0);
    }
    if (ft_duplicates(av))
    {
        return (0);
    }
    return (1);
    }
