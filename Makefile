NAME = libft.a

# Archivos fuente
SRCS = ft_printft.c

FLAGS = -Wall -Wextra -g -Werror

CC = cc

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
