# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/08/18 19:52:42 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FRM = rm -rf
CFLAGS = -Iincludes -Wall -Wextra -Werror
MAIN = main.c
LIBFT = \
	libft/ft_split.c		\
	libft/ft_strcpy.c		\
	libft/ft_strjoin.c	\
	libft/ft_strlcat.c	\
	libft/ft_strcmp.c		\
	libft/ft_strlcpy.c	\
	libft/ft_strlen.c		\
	libft/ft_arrlen.c		\
	libft/ft_strnstr.c	\
	libft/ft_substr.c		\
	libft/ft_isnumber.c	\
	libft/ft_isdigit.c	\
	libft/ft_atoi.c			\

UTILS = \
	utils/executes.c		\
	utils/free_stacks.c	\
	utils/is_sorted.c		\
	utils/print_stack.c	\
	utils/prints.c			\
	utils/short_sort.c	\
	utils/bogosort.c	\

SRCS = $(LIBFT) $(UTILS) $(MAIN)
OBJS = $(patsubst %.c, %.o, $(SRCS))
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
all: $(NAME)
clean:
	$(FRM) $(OBJS)
fclean: clean
	$(FRM) $(NAME)
re: fclean all
.PHONY: re fclean clean all