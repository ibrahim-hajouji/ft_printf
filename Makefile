SRCS = ft_putchar.c \
ft_putstr.c \
ft_puthex.c \
ft_putnbr.c \
ft_putnbr_u.c \
ft_printf.c \

GCC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}

all : ${NAME}

.c.o:
	${GCC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all