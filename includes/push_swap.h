#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

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

void    free_alloc(t_stack **stack);
int     ft_arg_zero(char *av);
int	    ft_atoi(const char *str);
int     ft_check_input(char **av);
void    ft_cost(t_stack **stack_a, t_stack **stack_b);
int     ft_duplicates(char **av);
void    ft_error(t_stack **stack_a, t_stack **stack_b);
int     ft_gettarget(t_stack **a, int b_index, int target_index, int target_pos);
void    ft_index_value(t_stack *stack_a, int stack_size);
int     ft_isnumber(char *av);
int	    ft_isdigit(int c);
int     ft_issign(char c);
int	    ft_nbrcmp(const char *s1, const char *s2);
void    ft_pb(t_stack **stack_a, t_stack **stack_b);
void    ft_push(t_stack **src, t_stack **dest);
void    ft_pushallnotthree(t_stack **stack_a, t_stack **stack_b);
void    ft_putstr(char *str);
void    ft_ra(t_stack **stack_a);
void    ft_revrot(t_stack **stack);
void    ft_rotate(t_stack **stack);
void    ft_rra(t_stack **stack_a);
void    ft_sa(t_stack **stack_a);
void    ft_sort_algo(t_stack **stack_a, t_stack **stack_b, int stack_size);
void    ft_sort(t_stack **stack_a, t_stack **stack_b);
int     ft_sorted(t_stack *stack_a);
t_stack *ft_stack_populate(int ac, char **av);
int     ft_stack_size(t_stack *stack);
t_stack *ft_stackbeforebottom(t_stack *stack);
t_stack *ft_stackbottom(t_stack *stack);
void    ft_swap(t_stack *stack);
void    ft_targetpos(t_stack **stack_a, t_stack **stack_b);
void    ft_tinysort(t_stack **stack);
#endif