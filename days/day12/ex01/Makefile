# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blinnea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/14 21:31:50 by blinnea           #+#    #+#              #
#    Updated: 2019/08/15 21:11:55 by blinnea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = ft_cat

# static libraries
LIBFT = libft.a

# compilation flags
CF = -Wall -Wextra -Werror

# directories
LIBFT_SRCS = ./srcs/libft/
INCLUDES = ./includes

# function names
LIBFT_FUNCS =  ft_putchar ft_putstr
MAIN_FUNC = main

# source files
LIBFT_C_FILES = $(patsubst %, $(LIBFT_SRCS)%.c, $(LIBFT_FUNCS))
MAIN_C_FILE = $(patsubst %, %.c, $(MAIN_FUNC))

# object files
LIBFT_O_FILES = $(patsubst %, %.o, $(LIBFT_FUNCS))
MAIN_O_FILE = $(patsubst %, %.o, $(MAIN_FUNC))

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(MAIN_O_FILE) $(LIBFT)
	@gcc $(CF) $(MAIN_O_FILE) -L. -lft -o $(NAME)

$(LIBFT): $(LIBFT_O_FILES)
	@ar rc $(LIBFT) $(LIBFT_O_FILES)
	@ranlib $(LIBFT)

$(MAIN_O_FILE):
	@gcc $(CF) -c $(MAIN_C_FILE) -I $(INCLUDES)

$(LIBFT_O_FILES):
	@gcc $(CF) -c $(LIBFT_C_FILES) -I $(INCLUDES)

clean:
	@rm -f $(LIBFT_O_FILES) $(MAIN_O_FILE) $(LIBFT)

fclean: clean
	@rm -f $(NAME)

re: fclean all
