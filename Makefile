NAME = push_swap

SRCS = main.c number_manipulation.c push_commands.c reverse_rotate_commands.c rotate_command.c sort_algorithm.c stack_check.c stack_cost.c stack_position.c stack_utilities.c string_manipulation.c swap_commands.c tinysort.c utilities.c

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
