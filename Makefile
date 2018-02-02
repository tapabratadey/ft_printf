NAME = libftprintf.a
SRC = *.c libft/*.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c
	gcc -Wall -Wextra -Werror -c libft/*.c
	ar rc $(NAME) *.o

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

compile:
	gcc -Wall -Wextra -Werror -g *.c -L libft/ -lft -o ft_printf
