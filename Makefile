# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/02 14:21:55 by cfiora            #+#    #+#              #
#    Updated: 2021/05/11 02:33:39 by cfiora           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_atoi.c \
ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strncmp.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SOURCES_B = ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
ft_lstiter.c ft_lstnew.c ft_lstlast.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_B = $(SOURCES_B:.c=.o)

BLUE = \033[1;36m 
PINK = \033[1;35m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS) 
	@echo "$(BLUE)...$(RESET)\c"
	@ar rc $(NAME) $(OBJECTS) $^
	@ranlib $(NAME)
	@echo "\n$(NAME): $(BLUE) object files are created $(RESET)"
	@echo "$(NAME): $(BLUE) $(NAME) created $(RESET)"

bonus: $(OBJECTS_B)
	@ar rcs $(NAME) $^
	@echo "\n$(NAME): $(BLUE) bonus object files are created $(RESET)" 


clean:  
	@rm -rf $(OBJECTS) $(OBJECTS_B)
	@echo "$(NAME): $(PINK) object files are deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(PINK) $(NAME) deleted $(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all