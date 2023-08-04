NAME = push_swap

SRCS =  main.c free_alloc.c ft_arg_zero.c ft_atoi.c ft_check_input.c ft_cost.c ft_duplicates.c ft_error.c ft_gettarget.c ft_index_value.c ft_is_number.c ft_isdigit.c ft_issign.c ft_nbrcmp.c ft_pb.c ft_push.c ft_pushallnotthree.c ft_putstr.c ft_ra.c ft_revrot.c ft_rotate.c ft_rra.c ft_sa.c ft_sort_algo.c ft_sort.c ft_sorted.c ft_stack_populate.c ft_stack_size.c ft_stackbeforebottom.c ft_stackbottom.c ft_swap.c ft_targetpos.c ft_tinysort.c 

CC = gcc

FLAGS = -Wextra -Wall -Werror -g

RM = rm -f

OBJ = $(SRCS:.c=.o)

%.o:%.c
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}:	${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -rf ${OBJ}

fclean: clean
	@rm -f ${NAME}

re: fclean all