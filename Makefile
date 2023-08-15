NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

FILES = \
		address_print.c \
		character_print.c \
		ft_printf.c \
		ft_strlen.c \
		hexadecimal_print.c \
		number_print.c \
		string_print.c \
		unsigned_print.c

OBJ_FILES = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re