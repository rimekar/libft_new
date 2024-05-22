######################################################################
SRCS		= $(wildcard *.c)

OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

%.o: %.c
		${CC} $(CFLAGS) -I. -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
