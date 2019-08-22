# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blinnea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 19:43:23 by blinnea           #+#    #+#              #
#    Updated: 2019/08/13 18:49:04 by blinnea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = do-op

# libraries
FTLIB = libft.a
OPLIB = libop.a

# compilation flags
CF = -Wall -Wextra -Werror

# directories
FTLIB_DIR = ./srcft/
OPLIB_DIR = ./srcop/
INCLUDES_DIR = ./includes/

# functions
FTLIB_FUNCS = ft_putchar ft_atoi ft_putstr ft_putnbr ft_strcmp 
OPLIB_FUNCS = ft_sub ft_add ft_div ft_mul ft_mod 
MAIN = main

# object files
FTLIB_O_FILES = $(patsubst %, %.o, $(FTLIB_FUNCS))
OPLIB_O_FILES = $(patsubst %, %.o, $(OPLIB_FUNCS))
MAIN_O_FILE = $(patsubst %, %.o, $(MAIN))

# source files
FTLIB_C_FILES = $(patsubst %, $(FTLIB_DIR)%.c, $(FTLIB_FUNCS))
OPLIB_C_FILES = $(patsubst %, $(OPLIB_DIR)%.c, $(OPLIB_FUNCS))
MAIN_C_FILE = $(patsubst %, %.c, $(MAIN))

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(FTLIB) $(OPLIB)
	@gcc $(CF) -c $(MAIN_C_FILE) -I $(INCLUDES_DIR)
	@gcc $(MAIN_O_FILE) -L. -lft -lop -o $(NAME)

$(FTLIB_O_FILES):
	@gcc $(CF) -c $(FTLIB_C_FILES) -I $(INCLUDES_DIR)

$(OPLIB_O_FILES):
	@gcc $(CF) -c $(OPLIB_C_FILES) -I $(INCLUDES_DIR)

$(FTLIB): $(FTLIB_O_FILES)
	@ar rc $(FTLIB) $(FTLIB_O_FILES)
	@ranlib $(FTLIB)

$(OPLIB): $(OPLIB_O_FILES)
	@ar rc $(OPLIB) $(OPLIB_O_FILES)
	@ranlib $(OPLIB)

clean:
	@rm -f $(FTLIB_O_FILES) $(OPLIB_O_FILES) $(MAIN_O_FILE)

fclean: clean
	@rm -f $(FTLIB) $(OPLIB) $(NAME)

re: fclean all
