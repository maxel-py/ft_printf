NAME	=	libftprintf.a

SRCS	=	ft_printf.c				ft_len_number.c			ft_change_16_letter.c\
			ft_strlen.c				ft_putchar.c			ft_putstr.c\
			ft_putnbr.c				ft_putnbr_unsigned.c	ft_create_str.c\
			ft_parse_pointer.c		ft_parse_char.c			ft_parse_str.c\
			ft_parse_int_dec.c		ft_parse_x_lower.c		ft_parse_x_upper.c\
			ft_parse_unsigned.c		ft_printf.c\

HEADER	= 	ft_printf.h
OBJ		=	$(SRCS:%.c=%.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)
REMOVE	=	rm -f
.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
			@$(CC) $(CFLAGS) -c $< -o $@

clean	:
			@$(REMOVE) $(OBJ)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all