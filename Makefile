NAME = push_swap

SRCS =  number_manipulation.c string_manipulation.c utilities.c ft_arg_zero.c ft_cheapest.c ft_check_input.c ft_cost.c ft_duplicates.c ft_error.c ft_gettarget.c ft_highest_index.c ft_index_value.c ft_lowestposindex.c ft_move.c ft_newstack.c ft_pa.c ft_pb.c ft_position.c ft_push.c ft_pushallnotthree.c ft_ra.c ft_rb.c ft_revrot_both.c ft_revrot.c ft_rot_both.c ft_rotate_a.c ft_rotate_b.c ft_rotate_both.c ft_rotate.c ft_rr.c ft_rra.c ft_rrb.c ft_rrr.c ft_sa.c ft_shiftstack.c ft_sort_algo.c ft_sort.c ft_sorted.c ft_stack_populate.c ft_stack_size.c ft_stackappend.c ft_stackbeforebottom.c ft_stackbottom.c ft_swap.c ft_targetpos.c ft_tinysort.c main.c

#Command Variables
CC = gcc
FLAGS = -Wextra -Wall -Werror -g
RM = rm -rf

INC = includes/push_swap.h

OBJ = $(SRCS:.c=.o)

#Colors
BLUE	=	\e[1;34m
RESET	=	\e[0m

#Commands
all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $@
	@printf "$(BLUE)Compiled Successfully.\n$(RESET)"

%.o:%.c
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(BLUE)Objects files deleted.\n$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(BLUE)Compiled files deleted.\n$(RESET)"

re: fclean all
