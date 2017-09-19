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
#include <ctype.h>
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
	printf(YELLOW"ft_strlen :\n"WHITE"\tstrlen    %s -> %zu\n\tft_strlen %s -> "
			"%zu\n" , s1, strlen(s1), s1, ft_strlen(s1));
	if (ft_strlen(s1) == strlen(s1))
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	//ft_putchar.c
	char	c1 = 'a';
	printf(YELLOW"ft_putchar :\n"WHITE"\tprintf     -> %c\n\tft_putchar -> ",
			c1);
	fflush(stdout);
	ft_putchar(c1);
	NEWLINE;
	VERIFY_MSG;

	//ft_putstr.c
	printf(YELLOW"ft_putstr :\n"WHITE"\tprintf    -> %s\n\tft_putstr -> ", s1);
	fflush(stdout);
	ft_putstr(s1);
	NEWLINE;
	VERIFY_MSG;

	//ft_putendl.c
	printf(YELLOW"ft_putendl :\n"WHITE"\tprintf     -> %s\n\tft_putendl -> ",
			s1);
	fflush(stdout);
	ft_putendl(s1);
	VERIFY_MSG;

	//ft_putnbr.c
	int		n1[8] = {INT_MIN, -123, -5, 0, 9, 10, 5647, INT_MAX};
	printf(YELLOW"ft_putnbr :\n"WHITE);
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
	printf(YELLOW"ft_putchar_fd :\n"WHITE"\tprintf        -> %c\n"
			"\tft_putchar_fd -> ", c1);
	fflush(stdout);
	ft_putchar_fd(c1, STDOUT_FILENO);
	NEWLINE;
	VERIFY_MSG;

	//ft_putstr_fd.c
	printf(YELLOW"ft_putstr_fd :\n"WHITE"\tprintf       -> %s\n"
			"\tft_putstr_fd -> ", s1);
	fflush(stdout);
	ft_putstr_fd(s1, STDOUT_FILENO);
	NEWLINE;
	VERIFY_MSG;

	//ft_putendl_fd.c
	printf(YELLOW"ft_putendl_fd :\n"WHITE"\tprintf        -> %s\n"
			"\tft_putendl_fd -> ", s1);
	fflush(stdout);
	ft_putendl_fd(s1, STDOUT_FILENO);
	VERIFY_MSG;

	//ft_putnbr_fd.c
	printf(YELLOW"ft_putnbr_fd :\n"WHITE);
	i = -1;
	while (++i < 8)
	{
		printf("\tprintf       -> %d\n\tft_putnbr_fd -> ", n1[i]);
		fflush(stdout);
		ft_putnbr_fd(n1[i], STDOUT_FILENO);
		NEWLINE;
	}
	VERIFY_MSG;

	//ft_strcmp.c
	printf(YELLOW"ft_strcmp :\n"WHITE);
	char	s2[4][100] =
	{
		"la str 1",
		"une autre str pour des tests",
		"encore une str",
		"et... la derniere"
	};
	char		s3[4][100] =
	{
		"la str 1",
		"une autre str pour des tests plus long",
		"encore",
		""
	};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\ts1 -> %s\n\ts2 -> %s\n\tstrcmp    -> %d\n\tft_strcmp -> "
				"%d\n\t", s3[i], s2[i], strcmp(s3[i], s2[i]),
				ft_strcmp(s3[i], s2[i]));
		if (strcmp(s3[i], s2[i]) == ft_strcmp(s3[i], s2[i]))
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

	//ft_strncmp.c
	printf(YELLOW"ft_strncmp :\n"WHITE);
	int		n2[] = {
		ft_strlen(s2[0]) + 5,
		ft_strlen(s3[1]) - 2,
		0,
		5
	};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\ts1 -> %s\n\ts2 -> %s\n\tn  -> %d\n\tstrncmp    -> %d\n"
				"\tft_strncmp -> %d\n\t", s3[i], s2[i], n2[i],
				strncmp(s3[i], s2[i], n2[i]), ft_strncmp(s3[i], s2[i], n2[i]));
		if (strncmp(s3[i], s2[i], n2[i]) == ft_strncmp(s3[i], s2[i], n2[i]))
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

	//ft_strcpy.c
	printf(YELLOW"ft_strcpy :\n"WHITE);
	char		*s4[4];
	i = -1;
	j = 0;
	while (++i < 4)
	{
		if (!(s4[i] = malloc(sizeof(*(s4[i])) * ft_strlen(s2[i]))))
			return (EXIT_FAILURE);
		printf("\tstrcpy    -> %s\n\tft_strcpy -> %s\n\t", strcpy(s4[i], s2[i]),
				ft_strcpy(s4[i], s2[i]));
		if (strcmp(strcpy(s4[i], s2[i]), ft_strcpy(s4[i], s2[i])) == 0)
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
	int			n3[] = {8, 12, 30, 17};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		if (!(s4[i] = malloc(sizeof(*(s4[i])) * ft_strlen(s2[i]))))
			return (EXIT_FAILURE);
		printf("\tstrncpy    -> %s\n\tft_strncpy -> %s\n\t",
				strncpy(s4[i], s2[i], n3[i]), ft_strncpy(s4[i], s2[i], n3[i]));
		if (strcmp(strncpy(s4[i], s2[i], n3[i]), 
					ft_strncpy(s4[i], s2[i], n3[i])) == 0)
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

	//ft_strcat.c
	printf(YELLOW"ft_strcat :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\tstrcat    -> %s\n\tft_strcat -> %s\n\t", strcat(s3[i], s2[i]),
				ft_strcat(s3[i], s2[i]));
		if (strcmp(strcat(s3[i], s2[i]), ft_strcat(s3[i], s2[i])) == 0)
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

	//ft_strncat.c
	printf(YELLOW"ft_strncat :\n"WHITE);
	int			n4[] =
	{
		ft_strlen(s3[i]) + ft_strlen(s2[i]),
		5,
		16,
		0
	};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\tstrncat    -> %s\n\tft_strncat -> %s\n\t",
				strncat(s3[i], s2[i], n4[i]), ft_strncat(s3[i], s2[i], n4[i]));
		if (strcmp(strncat(s3[i], s2[i], n4[i]), 
					ft_strncat(s3[i], s2[i], n4[i])) == 0)
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

	//ft_toupper.c
	printf(YELLOW"ft_toupper :\n"WHITE);
	char		c2[] = {'a', 'A', 'z', 'Z', '0', '9', ' ', '~', 14, 127};
	i = -1;
	j = 0;
	while (++i < 8)
	{
		printf("\ttoupper    %c -> %c\n\tft_toupper %c -> %c\n\t", c2[i],
				toupper(c2[i]), c2[i], ft_toupper(c2[i]));
		if (toupper(c2[i]) == ft_toupper(c2[i]))
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

	//ft_tolower.c
	printf(YELLOW"ft_tolower :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 8)
	{
		printf("\ttolower    %c -> %c\n\tft_tolower %c -> %c\n\t", c2[i],
				tolower(c2[i]), c2[i], ft_tolower(c2[i]));
		if (tolower(c2[i]) == ft_tolower(c2[i]))
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

	//ft_isalpha.c	
	printf(YELLOW"ft_isalpha :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisalpha   %c -> %d\n\tft_isalpha %c -> %d\n\t", c2[i],
				isalpha(c2[i]), c2[i], ft_isalpha(c2[i]));
		if (isalpha(c2[i]) == ft_isalpha(c2[i]))
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

	//ft_isdigit.c	
	printf(YELLOW"ft_isdigit :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisdigit   %c -> %d\n\tft_isdigit %c -> %d\n\t", c2[i],
				isdigit(c2[i]), c2[i], ft_isdigit(c2[i]));
		if (isdigit(c2[i]) == ft_isdigit(c2[i]))
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
	
	//ft_isalpha.c	
	printf(YELLOW"ft_isalnum :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisalnum   %c -> %d\n\tft_isalnum %c -> %d\n\t", c2[i],
				isalnum(c2[i]), c2[i], ft_isalnum(c2[i]));
		if (isalnum(c2[i]) == ft_isalnum(c2[i]))
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
	
	//ft_isascii.c	
	printf(YELLOW"ft_isascii :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisascii   %c -> %d\n\tft_isascii %c -> %d\n\t", c2[i],
				isascii(c2[i]), c2[i], ft_isascii(c2[i]));
		if (isascii(c2[i]) == ft_isascii(c2[i]))
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
	
	//ft_isprint.c	
	printf(YELLOW"ft_isprint :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisprint   %c -> %d\n\tft_isprint %c -> %d\n\t", c2[i],
				isprint(c2[i]), c2[i], ft_isprint(c2[i]));
		if (isprint(c2[i]) == ft_isprint(c2[i]))
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

	//ft_atoi.c
	printf(YELLOW"ft_atoi :\n"WHITE);
	char		s5[10][30] =
	{
		"213",
		" ",
		"-67",
		"--45",
		"dfg7s867",
		"  45a23",
		"a-23",
		"- 45",
		"0",
		"-0"
	};
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tatoi    %s -> %d\n\tft_atoi %s -> %d\n\t", s5[i],
				atoi(s5[i]), s5[i], ft_atoi(s5[i]));
		if (atoi(s5[i]) == ft_atoi(s5[i]))
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
