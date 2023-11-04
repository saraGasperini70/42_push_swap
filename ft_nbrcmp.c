#include "includes/push_swap.h"

int ft_nbrcmp(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (s1[i] == '+')
    {
        if (s2[j] != '+')
            i++;
    }
    else
    { 
        if (s2[j] == '+')
            j++;
    }
    while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
    {
        i++;
        j++;
    }
    printf("%s, %s \n\n\n", s1, s2);
    return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}