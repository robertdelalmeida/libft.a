NAME		=	libft.a

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_bzero.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c


HEADER		=	libft.h

AR			=	ar rcs

RM			=	rm -rf

OBJS		=	${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re