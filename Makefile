#################### VARIABLES ####################
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
INCLUDES = -I./includes
LIBFT = -l:libft -L:libft
AR = ar rcs
RM = rm -f

###################### FILES ######################
SRCS = ft_printf.c \
		arguments.c
OBJS = $(addprefix srcs/,$(SRCS:.c=.o))

###################### RULES ######################
all: $(NAME)

$(NAME): libft $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBFT) -c $< -o $@

libft:
	cd libft && make > /dev/null

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)
	cd libft && make fclean > /dev/null

re: fclean all

.PHONY: all libft fclean clean re