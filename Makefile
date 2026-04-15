NAME = push_swap
CC = cc
CFLAGS = -Wextra -Werror -Wall -Iinclude

SRCS = push_swap.c \
	add_info.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	make -C ./Libft
	make -C ./ft_printf
	@${CC} ${CFLAGS} ${OBJS} ./Libft/libft.a ./ft_printf/libftprintf.a -o ${NAME}

all: $(NAME)

clean:
	rm -f *.o
	rm -f Libft/*.o
	rm -f ft_printf/*.o

fclean: clean
	rm -f $(NAME)
	rm -f Libft/libft.a
	rm -f ft_printf/libftprintf.a

re: fclean all

.PHONY: all clean fclean re