
CC = CC
AR = ar -cr
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf

FILES =	ft_printf ft_putstr ft_putnbr_dec ft_format \
		ft_putchar ft_putnbr_hex 

OBJ = $(FILES:=.o)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

all : $(NAME)

%.o : %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $<

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
