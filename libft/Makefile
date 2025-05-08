SRCS		= $(wildcard *.c)
OBJS		= ${SRCS:.c=.o}

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rc
ID			= ranlib
RM			= rm -f

NAME		= libft.a


all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c -include libft.h $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(ID) $(NAME)

clean: 
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
