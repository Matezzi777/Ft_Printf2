#################### VARIABLES ####################
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
INCLUDES = -I./includes
LIBFT = -L:libft -lft
AR = ar rcs
RM = rm -f

###################### FILES ######################
SRCS = ft_printf.c \
		ft_print_character.c \
		ft_print_string.c \
		ft_print_address.c \
		ft_print_integer.c \
		ft_print_unsigned.c \
		ft_print_hexa.c
OBJS = $(addprefix srcs/,$(SRCS:.c=.o))

###################### RULES ######################
all: $(NAME)

$(NAME): libft $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBFT) -c $< -o $@

libft:
	cd libft && make bonus > /dev/null

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)
	cd libft && make fclean > /dev/null

re: fclean all

test: re
	cc -Wall -Wextra -Werror -Iincludes test.c -L. -l:libftprintf.a -L./libft -l:libft.a -o test

.PHONY: all bonus libft fclean clean re