NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.

SRC = ft_printf.c handle_format.c \
	$(addprefix converters/, \
	print_char.c \
	print_str.c \
	print_num.c \
	print_hex.c \
	print_ptr.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
