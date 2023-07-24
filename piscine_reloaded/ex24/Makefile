NAME = libft.a
SRCS  = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = $(SRCS:.c=.o)
INCLUDES = includes/ft_abs.h
FLAGS =  -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c 
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re