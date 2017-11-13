# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:45:36 by tnicolas          #+#    #+#              #
#    Updated: 2017/11/09 15:16:15 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR = includes

FILES = ft_strlen.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_putendl.c \
		  ft_putnbr.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_strcmp.c \
		  ft_strncmp.c \
		  ft_strcpy.c \
		  ft_strncpy.c \
		  ft_strcat.c \
		  ft_strncat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_atoi.c \
		  ft_itoa.c \
		  ft_strstr.c \
		  ft_strnstr.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_memalloc.c \
		  ft_memdel.c \
		  ft_strnew.c \
		  ft_strdel.c \
		  ft_strclr.c \
		  ft_striter.c \
		  ft_striteri.c \
		  ft_strmap.c \
		  ft_strmapi.c \
		  ft_strequ.c \
		  ft_strnequ.c \
		  ft_strsub.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_strsplit.c \
		  ft_strdup.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memccpy.c \
		  ft_memmove.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strlcat.c \
		  list/ft_lstnew.c \
		  list/ft_lstdelone.c \
		  list/ft_lstdel.c \
		  list/ft_lstadd.c \
		  list/ft_lstiter.c \
		  list/ft_lstmap.c \
		  ft_realloc.c

HFILES = includes/libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INC := $(addprefix -I , $(INC_DIR))
SRCS := $(addprefix srcs/, $(FILES))
OBJ := $(addprefix obj/, $(FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

obj/%.o: srcs/%.c
	$(CC) -c $(INC) $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ)

clean_swp:
	find . -name "*~" -o -name "#*#" -o -name ".*.swp" -delete -print

fclean: clean clean_swp
	rm -f $(NAME)

re: fclean all

open:
	@vim +12 `find . -iname "*.c" -o -iname "*.h" -o -iname "*.txt" \
		-o -iname "Makefile" -o -iname ".gitignore"` `find ~ -iname ".vimrc" \
	   -o -iname ".vim/vim_help_file"`

exec: all
	@clear
	$(CC) main.c -o libft_test $(INC) -L . $(CFLAGS) -lft
	@./libft_test

norm:
	@norminette $(SRCS) $(INC_DIR)/*

normok:
ifeq ($(shell norminette $(SRCS) $(HFILES) | grep -v "Norme:"),)
	@echo ok
else
	@make norm
endif

.PHONY: all clean clean_swp fclean re open exec norm normok
