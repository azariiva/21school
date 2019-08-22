# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blinnea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/14 21:31:50 by blinnea           #+#    #+#              #
#    Updated: 2019/08/18 23:00:48 by blinnea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = colle-2

# static libraries
LIBFT = libft.a
LIBROW = librow.a
LIBRUSH = librush.a

# compilation flags
CF = -Wall -Wextra -Werror

# directories
LIBFT_SRCS = ./srcs/libft
LIBRUSH_SRCS = ./srcs/librush
LIBROW_SRCS = ./srcs/librow
INCLUDES = ./includes

# function names
LIBFT_FUNCS =  ft_putchar ft_putstr ft_getchar ft_putnbr
LIBRUSH_FUNCS = ft_make_rush ft_get_rush ft_free_rush ft_is_rush00 ft_is_rush01 \
				ft_is_rush02 ft_is_rush03 ft_is_rush04 ft_which_rush \
				ft_formatted_output
LIBROW_FUNCS = ft_make_row ft_get_row ft_equal_row ft_cp_row

MAIN_FUNC = main

# source files
LIBFT_C_FILES = $(patsubst %, $(LIBFT_SRCS)/%.c, $(LIBFT_FUNCS))
LIBRUSH_C_FILES = $(patsubst %, $(LIBRUSH_SRCS)/%.c, $(LIBRUSH_FUNCS))
LIBROW_C_FILES = $(patsubst %, $(LIBROW_SRCS)/%.c, $(LIBROW_FUNCS))
MAIN_C_FILE = $(patsubst %, %.c, $(MAIN_FUNC))

# object files
LIBFT_O_FILES = $(patsubst %, %.o, $(LIBFT_FUNCS))
LIBRUSH_O_FILES = $(patsubst %, %.o, $(LIBRUSH_FUNCS))
LIBROW_O_FILES = $(patsubst %, %.o, $(LIBROW_FUNCS))
MAIN_O_FILE = $(patsubst %, %.o, $(MAIN_FUNC))

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(MAIN_O_FILE) $(LIBFT) $(LIBRUSH) $(LIBROW)
	@gcc $(CF) $(MAIN_O_FILE) -L. -lft -lrush -lrow -o $(NAME)

$(LIBRUSH): $(LIBRUSH_O_FILES)
	@ar rc $(LIBRUSH) $(LIBRUSH_O_FILES)
	@ranlib $(LIBRUSH)

$(LIBFT): $(LIBFT_O_FILES)
	@ar rc $(LIBFT) $(LIBFT_O_FILES)
	@ranlib $(LIBFT)

$(LIBROW): $(LIBROW_O_FILES)
	@ar rc $(LIBROW) $(LIBROW_O_FILES)
	@ranlib $(LIBROW)

$(MAIN_O_FILE): $(MAIN_C_FILE)
	@gcc $(CF) -c $(MAIN_C_FILE) -I $(INCLUDES)

$(LIBFT_O_FILES): $(LIBFT_C_FILES)
	@gcc $(CF) -c $(LIBFT_C_FILES) -I $(INCLUDES)

$(LIBRUSH_O_FILES): $(LIBRUSH_C_FILES)
	@gcc $(CF) -c $(LIBRUSH_C_FILES) -I $(INCLUDES)

$(LIBROW_O_FILES): $(LIBROW_C_FILES)
	@gcc $(CF) -c $(LIBROW_C_FILES) -I $(INCLUDES)

clean:
	@rm -f $(LIBFT_O_FILES) $(LIBRUSH_O_FILES) $(LIBROW_O_FILES) $(MAIN_O_FILE) $(LIBFT) $(LIBRUSH) $(LIBROW)

fclean: clean
	@rm -f $(NAME)

re: fclean all
