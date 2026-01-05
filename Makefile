
NAME = push_swap

SRCS = src/main.c \
src/swap_instruction.c src/push_instruction.c \
src/rotate_instruction.c src/reverse_rotate_instruction.c\
utils/check_args.c utils/utils.c utils/initialize_stacks.c \


OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

all: $(NAME)

$(NAME): $(OBJS)
	${MAKE} -C ./libft
	$(CC) $(CFLAGS) ./libft/libft.a $(OBJS) -o $(NAME)

clean:
	${MAKE} -C ./libft fclean
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
