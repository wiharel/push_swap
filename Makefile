SRCS = sources/check.c sources/commands.c sources/dll.c \
       sources/free.c sources/ft_split.c sources/ft_strlcpy.c \
       sources/main.c sources/number.c sources/push_swap.c \
       sources/sort_stack.c sources/sort_under_five.c \
       sources/sort_under_three.c sources/ft_check_arg.c 

OBJS = ${SRCS:.c=.o}

NAME = push_swap

INC = ./include/

CC =gcc -Wall -Wextra -Werror

RM = rm -f

all: ${NAME}

.c.o:
	${CC} -I${INC} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${CC} ${OBJS} -I${INC} -o${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
