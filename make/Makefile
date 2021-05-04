# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/02 14:21:55 by cfiora            #+#    #+#              #
#    Updated: 2021/05/02 19:04:39 by cfiora           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I$(HEADRERS_DIRECTORY)
HEADRERS_LIST = libft.h
HEADRERS_DIRECTORY = ./includes/
HEADRERS = $(adprefix $(HEADRERS_DIRECTORY), $(HEADRERS_LIST))

SOURCES_DIRECTORY = ./srcs/
SOURCES_LIST = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))
OBJECTS_LIST = $(SOURCES_LIST:.c=.o)
OBJECTS = $(addprefix $(SOURCES_DIRECTORY), $(OBJECTS_LIST))

BLUE = \033[1;36m
PINK = \033[1;35m
RESET = \033[0m

.PHONY: all clean fclean re 

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "\n$(NAME): $(BLUE) object files are created $(RESET)"
	@echo "$(NAME): $(BLUE) $(NAME) created $(RESET)"


$(OBJECTS_LIST)%.o : $(SOURCES_DIRECTORY)%.c $(HEADRERS)
	@$(CC) $(FLAGS) $(INCLUDES) $< -o $@
	@echo "$(BLUE).$(RESET)\c"

clean:
	@rm -rf $(OBJECTS)
	@echo "$(NAME): $(PINK) object files are deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(PINK) $(NAME) deleted $(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
