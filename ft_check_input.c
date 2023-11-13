#include "includes/push_swap.h"

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
