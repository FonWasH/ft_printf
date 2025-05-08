LIB_DIR			= ./libft/
INC_DIR			= ./include/
SRC_DIR			= ./src/

LIB				= libft.a
INC				= ft_printf.h
SRC				= ft_printf.c ft_printf_utils.c ft_printf_convert.c ft_printf_convertbase.c

LIBS			= $(addprefix $(LIB_DIR), $(LIB))
INCS			= $(addprefix $(INC_DIR), $(INC))
SRCS			= $(addprefix $(SRC_DIR), $(SRC))
OBJS			= $(SRCS:.c=.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar rc
ID				= ranlib
RM				= rm -f

NAME			= libftprintf.a


all:			$(NAME)

.c.o:
				$(CC) $(CFLAGS) -c -include $(INCS) $< -o $(<:.c=.o)

$(NAME):		$(OBJS)
				make -sC $(LIB_DIR)
				cp $(LIBS) $(NAME)
				$(AR) $(NAME) $(OBJS)
				$(ID) $(NAME)

bonus:			$(NAME)

clean:
				make clean -sC $(LIB_DIR)
				$(RM) $(OBJS)

fclean:			clean
				make fclean -sC $(LIB_DIR)
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all bonus clean fclean re