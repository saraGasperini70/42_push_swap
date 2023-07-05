#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>

typedef struct s_stack
{
    int value;
    int index;
    int pos;
    int target_pos;
    int cost_a;
    int cost_b;
    struct s_stack *next;
}   t_stack;

int     ft_arg_zero(char *av);
int	    ft_atoi(const char *str);
int     ft_check_input(char **av);
int     ft_duplicates(char **av);
int     ft_isnumber(char *av);
int	    ft_isdigit(int c);
int     ft_issign(char c);
int	    ft_nbrcmp(const char *s1, const char *s2);
int     ft_sorted(t_stack *stack_a);
t_stack *ft_stack_populate(int ac, char **av);
#endif