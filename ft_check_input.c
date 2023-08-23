#include "includes/push_swap.h"

/*
Funzione di check degli argomenti di input: verifica che siano tutti numeri e restituisce 1, altrimemti restituisce 0
*/
int ft_check_input(char **av)
{
    int nb_zeros;
    int i;

    i = 1;
    nb_zeros = 0;
    while (av[i])
    {
        if (!ft_isnumber(av[i]))
        {
            printf("Devono esserci solo numeri!");
            return (0);
        }
        nb_zeros += ft_arg_zero(av[i]);
        printf("nb_zeros: %d\n", nb_zeros);
        i++;
    }
    if (nb_zeros > 1)
        return (0);
    if (ft_duplicates(av))
    {
        printf("Ci sono duplicati!");
        return (0);
    }
    return (1);
}