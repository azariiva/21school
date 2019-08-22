# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blinnea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/18 21:28:27 by blinnea           #+#    #+#              #
#    Updated: 2019/08/18 21:37:52 by blinnea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = eval_expr

# static libraries
LIBIO = libio.a
LIBSW = libsw.a
LIBCALC = libcalc.a
LIBSOP = libsop.a
LIBSVA = libsva.a

# compilation flags
CF = -Wall -Wextra -Werror

# directories
SRCS = ./srcs
INCLUDES = ./includes

# filenames
LIBIO_FILES = ft_io
LIBSW_FILES = ft_split_whitespaces
LIBCALC_FILES = ft_op ft_eval_expr ft_cases
LIBSOP_FILES = ft_stack_op
LIBSVA_FILES = ft_stack_val
MAIN_FILE = main

# source files
LIBIO_C_FILES = $(patsubst %, $(SRCS)/%.c, $(LIBIO_FILES))
LIBSW_C_FILES = $(patsubst %, $(SRCS)/%.c, $(LIBSW_FILES))
LIBCALC_C_FILES = $(patsubst %, $(SRCS)/%.c, $(LIBCALC_FILES))
LIBSOP_C_FILES = $(patsubst %, $(SRCS)/%.c, $(LIBSOP_FILES)) 
LIBSVA_C_FILES = $(patsubst %, $(SRCS)/%.c, $(LIBSVA_FILES))
MAIN_C_FILE = $(patsubst %, %.c, $(MAIN_FILE))

# object files
LIBIO_O_FILES = $(patsubst %, %.o, $(LIBIO_FILES))
LIBSW_O_FILES = $(patsubst %, %.o, $(LIBSW_FILES))
LIBCALC_O_FILES = $(patsubst %, %.o, $(LIBCALC_FILES))
LIBSOP_O_FILES = $(patsubst %, %.o, $(LIBSOP_FILES)) 
LIBSVA_O_FILES = $(patsubst %, %.o, $(LIBSVA_FILES))
MAIN_O_FILE = $(patsubst %, %.o, $(MAIN_FILE))

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(MAIN_O_FILE) $(LIBIO) $(LIBSW) $(LIBCALC) $(LIBSOP) $(LIBSVA)
	@gcc $(CF) $(MAIN_O_FILE) -L. -lio -lsw -lcalc -lsop -lsva -o $(NAME)

$(MAIN_O_FILE): $(MAIN_C_FILE)
	@gcc $(CF) -c $(MAIN_C_FILE) -I $(INCLUDES)

$(LIBIO): $(LIBIO_O_FILES)
	@ar rc $(LIBIO) $(LIBIO_O_FILES)
	@ranlib $(LIBIO)

$(LIBSW): $(LIBSW_O_FILES)
	@ar rc $(LIBSW) $(LIBSW_O_FILES)
	@ranlib $(LIBSW)

$(LIBCALC): $(LIBCALC_O_FILES)
	@ar rc $(LIBCALC) $(LIBCALC_O_FILES)
	@ranlib $(LIBCALC)

$(LIBSOP): $(LIBSOP_O_FILES)
	@ar rc $(LIBSOP) $(LIBSOP_O_FILES)
	@ranlib $(LIBSOP)

$(LIBSVA): $(LIBSVA_O_FILES)
	@ar rc $(LIBSVA) $(LIBSVA_O_FILES)
	@ranlib $(LIBSVA)

$(LIBIO_O_FILES): $(LIBIO_C_FILES)
	@gcc $(CF) -c $(LIBIO_C_FILES) -I $(INCLUDES)

$(LIBSW_O_FILES): $(LIBSW_C_FILES)
	@gcc $(CF) -c $(LIBSW_C_FILES) -I $(INCLUDES)

$(LIBCALC_O_FILES): $(LIBCALC_C_FILES)
	@gcc $(CF) -c $(LIBCALC_C_FILES) -I $(INCLUDES)

$(LIBSOP_O_FILES): $(LIBSOP_C_FILES)
	@gcc $(CF) -c $(LIBSOP_C_FILES) -I $(INCLUDES)

$(LIBSVA_O_FILES): $(LIBSVA_C_FILES)
	@gcc $(CF) -c $(LIBSVA_C_FILES) -I $(INCLUDES)

clean:
	@rm -f $(MAIN_O_FILE) $(LIBIO_O_FILES) $(LIBSW_O_FILES) $(LIBCALC_O_FILES) $(LIBSOP_O_FILES) $(LIBSVA_O_FILES) $(LIBIO) $(LIBSW) $(LIBCALC) $(LIBSOP) $(LIBSVA)

fclean: clean
	@rm -f $(NAME)

re: fclean all
