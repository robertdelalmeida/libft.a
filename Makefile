NAME		=	libft.a

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_bzero.c ft_strdup.c ft_calloc.c ft_atoi.c


HEADER		=	libft.h

AR			=	ar rcs

RM			=	rm -rf

OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS} ${HEADER}

%.o: %.c
	$(CC) ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re