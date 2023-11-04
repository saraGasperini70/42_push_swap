#include "includes/push_swap.h"
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
