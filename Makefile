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

MAIN_C = ../main.c

MAIN_O = main.o

C_FILES = ""

O_FILES = $(C_FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

LIB = ""

all: $(NAME)

$(NAME):
	gcc -c $(C_FILES) $(FLAGS) $(LIB)
	gcc -o $(NAME) $(O_FILES) $(FLAGS) $(LIB)

clean:
	rm -f $(O_FILES)

clean_swp:
	find . -name "*~" -o -name "#*#" -o -name ".*.swp" -delete -print

fclean: clean clean_swp
	rm -f $(NAME)

re: fclean all

m_all:
	gcc -c $(C_FILES) $(MAIN_C) $(FLAGS) $(LIB)
	gcc -o $(NAME) $(O_FILES) $(MAIN_O) $(FLAGS) $(LIB)

m_re: fclean m_re

m_noflags: fclean
	gcc -c $(C_FILES) $(MAIN_C) $(LIB)
	gcc -o $(NAME) $(O_FILES) $(MAIN_0) $(LIB)

m_noobj: m_re clean

m_noflags_noobj: m_noflags clean

open:
	vim +12 `find . -iname "*.c" -o -iname "*.h" -o -iname "*.txt" \
		-o -iname "Makefile"`

m_open:
	vim +12 `find . -iname "*.c" -o -iname "*.h" -o -iname "*.txt" \
		-o -iname "Makefile"` ../main.c

m_compil:
	clear
	make m_re
	make m_clean
	@echo ""

m_exec:
	make compil
	./$(NAME)

gadd: clean clean_swp
	git add -A

gcommit: gadd
	git commit -m "commit"

gpush: gcommit
	git push
