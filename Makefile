NAME = push_swap

SRCS =  main.c ft_arg_zero.c ft_atoi.c ft_check_input.c ft_duplicates.c ft_is_number.c ft_isdigit ft_issign.c ft_nbrcmp.c ft_sorted.c ft_stack_populate.c

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