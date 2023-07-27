NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC_FILES = \
			address_print.c \
			character_print.c \
			hexalower_print.c \
			hexaupper_print.c \
			number_print.c \
			percent_print.c \
			string_print.c \
			unsigned_print.c
#			ft_printf.c

OBJ_FILES = $(SRC_FILES:.c=.o)

LIBFT = Libft/libft.a

all: $(NAME)

$(NAME): $(OBJ_FILES)
	Make -C LIBFT
	ar rus $(NAME) $(OBJ_FILES) $(LIBFT)

clean:
	rm $(OBJ_FILES)
	Make -C LIBFT clean

fclean: clean
	rm $(NAME)
	Make -C LIBFT fclean

re: fclean all

.PHONY: all clean fclean re