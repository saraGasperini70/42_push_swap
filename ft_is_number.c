#include "includes/push_swap.h"
int ft_isnumber(char *av)
{
    int i;

    i = 0;
    if (ft_issign(av[i]) && av[i + 1] != '\0')
    {
        i++;
    }
    while (av[i] && ft_isdigit(av[i]))
    {
        i++;
    }
    if (av[i] != '\0' && !ft_isdigit(av[i]))
    {
        return (0);
    }
    return (1);
}