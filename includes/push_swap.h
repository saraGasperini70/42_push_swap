#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				current_pos;
	struct s_stack	*target_pos;
	int				cost;
	int				above_median;
	int				is_cheapest;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

/*Number Manipulation*/
int		ft_isnumber(char *av);
int		ft_isdigit(char c);
int		ft_nbrcmp(const char *s1, const char *s2);
int		ft_issign(char c);
int		ft_nbabs(int nb);

/*Push commands*/
void	ft_push(t_stack **dest, t_stack **src);
void	ft_pa(t_stack **stack_a, t_stack **stack_b, int checker);
void	ft_pb(t_stack **stack_a, t_stack **stack_b, int checker);

/*Reverse rotate commands*/
void	ft_rev_rotate_both(t_stack **stack_a, t_stack **stack_b,
			t_stack *cheapest);
void	ft_reverse_rot(t_stack **stack);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int checker);
void	ft_rrb(t_stack **stack_b, int checker);
void	ft_rra(t_stack **stack_a, int checker);

/*Rotate Commands*/
void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest);
void	ft_rotate(t_stack **stack);
void	ft_rb(t_stack **stack_b, int checker);
void	ft_ra(t_stack **stack_a, int checker);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int checker);

/*Sort algorithm*/
void	ft_end_rotate(t_stack **stack, t_stack *top, char stack_name);
void	ft_move(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);

/*Stack check*/
void	ft_error(t_stack **stack_a, t_stack **stack_b);
int		ft_arg_zero(char *av);
int		ft_duplicates(char **av);
int		ft_sorted(t_stack *stack_a);
int		ft_check_input(char **av);

/*Stack cost*/
t_stack	*ft_find_cheapest(t_stack *stack);
void	ft_set_cheapest(t_stack *stack_b);
void	ft_set_price(t_stack *stack_a, t_stack *stack_b);

/*Stack position*/
void	ft_current_position(t_stack *stack);
t_stack	*ft_find_last(t_stack *head);
t_stack	*ft_find_smallest(t_stack *stack);

/*Stack utilities*/
void	ft_stackappend(t_stack **stack, int nbr);
t_stack	*ft_stack_populate(int ac, char **av, int flag_ac);
int		ft_stack_size(t_stack *stack);
void	ft_update_stack(t_stack *stack_a, t_stack *stack_b);

/*String manipulation*/
char	*ft_substr(char const *s, unsigned int start, int len);
char	**ft_split(const char *s, char c);
void	ft_putstr_fd(char *s, int fd);

/*Swap commands*/
void	ft_swap(t_stack **head);
void	ft_sa(t_stack **stack_a, int checker);
void	ft_sb(t_stack **stack_b, int checker);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, int checker);

/*Tinysort*/
char	**ft_argument_check(int ac, char **av);
t_stack	*ft_find_highest(t_stack *stack);
void	ft_tinysort(t_stack **stack);

/*Utilities*/
int		ft_matrix_size(char **new_matrix);
void	ft_free_matrix(char **av);
void	free_alloc(t_stack **stack);
long	ft_atoi(const char *str);
int		ft_strlen(const char *str);

#endif
