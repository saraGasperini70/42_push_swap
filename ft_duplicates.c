#include "includes/push_swap.h"

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