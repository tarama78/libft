# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/15 17:00:50 by tnicolas          #+#    #+#              #
#    Updated: 2017/09/15 17:00:50 by tnicolas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME_EXE = ../libft_test

MAIN_C = ../main.c

MAIN_O = main.o

C_FILES = ft_strlen.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_putendl.c \
		  ft_putnbr.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_strcpy.c \
		  ft_strncpy.c

O_FILES = $(C_FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

LIB = ""

all: $(NAME)

$(NAME):
	gcc -c $(C_FILES) $(FLAGS) $(LIB)
	ar rc $(NAME) $(O_FILES)
	rm $(O_FILES)
	ranlib $(NAME)

clean:
	rm -f $(O_FILES)

clean_swp:
	find . -name "*~" -o -name "#*#" -o -name ".*.swp" -delete -print

fclean: clean clean_swp
	rm -f $(NAME)

re: fclean all

m_all:
	gcc -c $(C_FILES) $(MAIN_C) $(FLAGS) $(LIB)
	ar rc $(NAME) $(O_FILES)
	rm $(O_FILES)
	ranlib $(NAME)
	gcc -o $(NAME_EXE) $(MAIN_O) $(NAME)

m_re: fclean m_all

m_noflags: fclean
	gcc -c $(C_FILES) $(MAIN_C) $(LIB)
	ar rc $(NAME) $(O_FILES)
	rm $(O_FILES)
	ranlib $(NAME)

open:
	vim +12 `find . -iname "*.c" -o -iname "*.h" -o -iname "*.txt" \
		-o -iname "Makefile"`

m_open:
	vim +12 `find . -iname "*.c" -o -iname "*.h" -o -iname "*.txt" \
		-o -iname "Makefile"` ../main.c

m_compil:
	clear
	make m_re
	make clean
	find . -iname "main.o" -delete
	@echo ""

m_exec:
	make m_compil
	./$(NAME_EXE)

gadd: clean clean_swp
	git add -A

gcommit: gadd
	git commit -m "commit"

gpush: gcommit
	git push
