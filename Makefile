NAME	=	libftprintf.a
RM		=	rm -f
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
SRC		=	ft_printf_utils.c \
			ft_printf.c \
			ft_put_hex.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putptr_hex.c \
			ft_putstr.c \
			ft_put_un_nbr.c

SRC_DIR	=	$(addprefix src/, $(SRC))
OBJS	=	$(SRC_DIR:.c=.o)
INCLUDE	=	ft_printf.h
LIB		=	ar -rcs

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(LIB) -r $@ $?
	@echo "Compilation of the library \""$@"\" is complete."

.c.o	%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	@echo "Creating object file \""$(@)"\"."

clean:
	@$(RM) $(OBJS)
	@echo "Object files deleted successfully."
fclean:	clean
	@$(RM) $(NAME)
	@echo "Library deleted successfully."
re: fclean all

.PHONY: re fclean clean
