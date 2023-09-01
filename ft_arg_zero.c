#include "includes/push_swap.h"
/*
int ft_issign(char c)
{
    if (c == '+' || c == '-')
        return (1);
    else
        return (0);
}
*/

int ft_arg_zero(char *av)
{
    int i;

    i = 0;
    if (ft_issign(av[i]))
        i++;
    while (av[i] && av[i] == '0')
        i++;
    if (av[i] != '\0')
        return (0);
    return (1);
}
/*
int main(int ac, char **av)
{
    int i;
    int nb;

    i = 1;
    nb = 0;
    if (ac > 2)
    {
        while (av[i])
        {
            nb += ft_arg_zero(av[i]);
            i++;
        }
    }
}
*/