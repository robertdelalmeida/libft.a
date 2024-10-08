NAME		=	libft.a

CC			=	gcc

FLAGS		=	-Wall -Werror -Wextra

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_tolower.c
				


HEADER		=	libft.h

RM			=	rm -rf

OBJS		=	$(SRCS:.c=.o)

.c.o: $(CC)  ${FLAGS} -o $(NAME) $(SRCS)

all:	$(NAME)

$(NAME) : $(OBJS)
	ar rcs ${NAME} ${OBJS} ${HEADER}

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re