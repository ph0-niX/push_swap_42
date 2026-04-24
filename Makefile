NAME = push_swap
CC = cc
# CFLAGS = -Wextra -Werror -Wall -Iinclude -g
# CFLAGS = -Wextra -Werror -Wall -g
CFLAGS = -g

SRCS = push_swap.c \
	add_info.c \
	check_input.c \
	fill_stack.c \
	put_index.c \
	stack_pa.c \
	stack_pb.c \
	stack_ra.c \
	stack_rb.c \
	stack_rr.c \
	stack_rra.c \
	stack_rrb.c \
	stack_rrr.c \
	stack_sa.c \
	stack_sb.c \
	stack_ss.c \
	basic_stack_ops_1.c \
	basic_stack_ops_2.c

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