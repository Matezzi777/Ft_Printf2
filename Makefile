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
		utils.c \
		parsing.c
OBJS = $(addprefix srcs/,$(SRCS:.c=.o))

###################### RULES ######################
all: $(NAME)

$(NAME): libft $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(NAME)

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

.PHONY: all bonus libft fclean clean re