# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blinnea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 14:44:02 by blinnea           #+#    #+#              #
#    Updated: 2019/08/12 16:05:45 by blinnea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# library
LIBFT = libft.a

# compilation flags
CF = -Wall -Wextra -Werror

# directories
SRCS_DIR = ./srcs/
INCLUDES_DIR = ./includes/

# function names
FUNCS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap

# object files
O_FILES = $(patsubst %, %.o, $(FUNCS))

# source files
C_FILES = $(patsubst %, $(SRCS_DIR)%.c, $(FUNCS))

.PHONY: clean fclean re all

all: $(LIBFT)

$(O_FILES):
	@gcc $(CF) -c $(C_FILES) -I $(INCLUDES_DIR)

$(LIBFT): $(O_FILES)
	@ar rc $(LIBFT) $(O_FILES)
	@ranlib $(LIBFT)

clean:
	@rm -f $(O_FILES)

fclean: clean
	@rm -f $(LIBFT)

re: fclean all
