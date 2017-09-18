/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ../main.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: tnicolas <marvin@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2017/09/18 13:22:29 by tnicolas		   #+#	  #+#			  */
/*	 Updated: 2017/09/18 13:22:29 by tnicolas		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "rendu/libft.h"

#define NORMAL	"\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW	"\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"
#define SUCCESS_MSG printf(GREEN"<<< SUCCESS >>>\n\n"WHITE)
#define FAILURE_MSG printf(RED"<<< FAILLURE >>>\n\n"WHITE)
#define VERIFY_MSG printf(BLUE"<<< VERIFY THE RESULT >>>\n\n"WHITE)
#define NOT_TESTED_MSG printf(MAGENTA"<<< FUNCTION NOT TESTED >>>\n\n"WHITE)
#define NEWLINE ft_putchar('\n')

int			main(int ac, char **av)
{
	int		i;
	int		j;
	(void)ac;
	(void)av;

	//ft_strlen.c
	char	s1[] = "12345678";
	printf(YELLOW"ft_strlen :\n"WHITE"\tft_strlen %s -> %zu\n\tstrlen %s -> %zu\n"
			, s1, ft_strlen(s1), s1, strlen(s1));
	if (ft_strlen(s1) == strlen(s1))
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	//ft_putchar.c
	char	c1 = 'a';
	printf(YELLOW"ft_putchar :\n"WHITE"\tprintf -> %c\n\tft_putchar -> ", c1);
	fflush(stdout);
	ft_putchar(c1);
	NEWLINE;
	VERIFY_MSG;

	//ft_putstr.c
	printf(YELLOW"ft_putstr :\n"WHITE"\tprintf > %s\n\tft_putendl -> ", s1);
	fflush(stdout);
	ft_putstr(s1);
	NEWLINE;
	VERIFY_MSG;

	//ft_putstr.c
	printf(YELLOW"ft_putendl :\n"WHITE"\tprintf > %s\n\tft_putendl -> ", s1);
	fflush(stdout);
	ft_putendl(s1);
	VERIFY_MSG;

	//ft_putnbr.c
	int		n1[8] = {INT_MIN, -123, -5, 0, 9, 10, 5647, INT_MAX};
	printf(YELLOW"ft_putstr_fd :\n"WHITE);
	i = -1;
	while (++i < 8)
	{
		printf("\tprintf    -> %d\n\tft_putnbr -> ", n1[i]);
		fflush(stdout);
		ft_putnbr(n1[i]);
		NEWLINE;
	}
	VERIFY_MSG;

	//ft_puchar_fd.c
	printf(YELLOW"ft_putchar_fd :\n"WHITE);
	NOT_TESTED_MSG;

	//ft_putstr_fd.c
	printf(YELLOW"ft_putstr_fd :\n"WHITE);
	NOT_TESTED_MSG;

	//ft_puchar_fd.c
	printf(YELLOW"ft_putendl_fd :\n"WHITE);
	NOT_TESTED_MSG;

	//ft_putnbr_fd.c
	printf(YELLOW"ft_putnbr_fd :\n"WHITE);
	NOT_TESTED_MSG;

	//ft_strcpy.c
	printf(YELLOW"ft_strcpy :\n"WHITE);
	char	s2[4][100] =
	{
		"la str 1",
		"une autre str pour des tests",
		"encore une str",
		"et... la derniere"
	};
	char		*s3[4];
	i = -1;
	j = 0;
	while (++i < 4)
	{
		if (!(s3[i] = malloc(sizeof(*(s3[i])) * ft_strlen(s2[i]))))
			return (EXIT_FAILURE);
		printf("\tstrcpy    -> %s\n\tft_strcpy -> %s\n\t", strcpy(s3[i], s2[i]),
				ft_strcpy(s3[i], s2[i]));
		if (strcmp(strcpy(s3[i], s2[i]), ft_strcpy(s3[i], s2[i])) == 0)
			SUCCESS_MSG;
		else
		{
			FAILURE_MSG;
			j = 1;
		}
	}
	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	//ft_strncpy.c
	printf(YELLOW"ft_strncpy :\n"WHITE);
	int			n2[] = {8, 12, 30, 17};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		if (!(s3[i] = malloc(sizeof(*(s3[i])) * ft_strlen(s2[i]))))
			return (EXIT_FAILURE);
		printf("\tstrncpy    -> %s\n\tft_strncpy -> %s\n\t",
				strncpy(s3[i], s2[i], n2[i]), ft_strncpy(s3[i], s2[i], n2[i]));
		if (strcmp(strncpy(s3[i], s2[i], n2[i]), 
					ft_strncpy(s3[i], s2[i], n2[i])) == 0)
			SUCCESS_MSG;
		else
		{
			FAILURE_MSG;
			j = 1;
		}
	}
	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	return(0);
}
