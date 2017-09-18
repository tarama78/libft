/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:22:29 by tnicolas          #+#    #+#             */
/*   Updated: 2017/09/18 13:22:29 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rendu/libft.h"

#define NORMAL  "\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"
#define SUCCESS_MSG GREEN"<<< SUCCESS >>>\n"
#define FAILLURE_MSG RED"<<< FAILLURE >>>\n"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;

	//ft_strlen.c
	char	str1[] = "12345678";
	printf(YELLOW"ft_strlen :\n"WHITE"\tft_strlen %s -> %zu\n\tstrlen %s -> %zu\n"
			, str1, ft_strlen(str1), str1, strlen(str1));
	if (ft_strlen(str1) == strlen(str1))
		printf(SUCCESS_MSG);
	else
		printf(FAILLURE_MSG);
	return(0);
}
