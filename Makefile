NAME = ft_printf.a

# Archivos fuente
SRCS = ft_printf.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strlen.c \
		ft_putnbrsign.c \
		ft_putnbrlong.c \
		ft_print_hex.c


FLAGS = -Wall -Wextra -g -Werror

CC = gcc

CLEAN = rm -rf

# CLEAN = del /Q /F

all: $(NAME)

OBJ = $(SRCS:.c=.o)

$(OBJ): $(SRCS)
	$(CC) -g $(FLAGS) -c $(SRCS)

$(NAME): $(OBJ)
	ar -rsc $(NAME) $(OBJ)

clean:
	@$(CLEAN) *.o

fclean: clean
	@$(CLEAN) *.a

re: fclean all

.PHONY: all clean fclean re
