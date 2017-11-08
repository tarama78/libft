# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 12:32:15 by tnicolas          #+#    #+#              #
#    Updated: 2017/11/08 13:53:36 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_test

LIBFT = -L rendu/ -lft

SRCS = main.c
INC := -I rendu/includes

CC = gcc
CFlAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C rendu/ all
	$(CC) $(SRCS) -o $(NAME) $(INC) $(LIBFT)

clean:
	make -C rendu clean

fclean:
	make -C rendu fclean
	rm -f $(NAME)

re: fclean all

exec:
	@clear
	make all
	./$(NAME)
