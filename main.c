/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.c												:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: tnicolas <marvin@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2017/11/07 09:45:14 by tnicolas		   #+#	  #+#			  */
/*	 Updated: 2017/11/07 11:22:57 by tnicolas		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <ctype.h>
#include <libft.h>
#include <libft.h>

#define NORMAL	"\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW	"\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"
#define SUCCESS_MSG printf(GREEN"<<< SUCCESS >>>\n\n"WHITE)
#define FAILURE_MSG printf(RED"<<< FAILURE >>>%s\n\n"WHITE, (ok = 1)?"":"")
#define VERIFY_MSG printf(BLUE"<<< VERIFY THE RESULT >>>\n\n"WHITE)
#define NOT_TESTED_MSG printf(MAGENTA"<<< FUNCTION NOT TESTED >>>\n\n"WHITE)
#define NEWLINE ft_putchar('\n')

void		ft_wait()
{
	static int		i = 0;
	char			c;

	i++;
	if (i == 0)
		scanf("%c", &c);
}

void		ft_f1(char *c)
{
	(*c)++;
}

void		ft_f2(unsigned int n, char *c)
{
	if (n % 2 == 0)
		(*c)++;
}

char		ft_f3(char c)
{
	return (c - 1);
}

char		ft_f4(unsigned int n, char c)
{
	return ((n % 2 == 0) ? c - 1 : c);
}

void		ft_list();

int			main(int ac, char **av)
{
	int		i;
	int		j;
	int		ok = 0;
	(void)ac;
	(void)av;

	ft_wait();

	// ft_strlen.c
	char	s1[] = "12345678";
	printf(YELLOW"ft_strlen :\n"WHITE"\tstrlen	  %s -> %zu\n\tft_strlen %s -> "
			"%zu\n" , s1, strlen(s1), s1, ft_strlen(s1));
	if (ft_strlen(s1) == strlen(s1))
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_putchar.c
	char	c1 = 'a';
	printf(YELLOW"ft_putchar :\n"WHITE"\tprintf		-> %c\n\tft_putchar -> ",
			c1);
	fflush(stdout);
	ft_putchar(c1);
	NEWLINE;
	VERIFY_MSG;

	ft_wait();

	// ft_putstr.c
	printf(YELLOW"ft_putstr :\n"WHITE"\tprintf	  -> %s\n\tft_putstr -> ", s1);
	fflush(stdout);
	ft_putstr(s1);
	NEWLINE;
	VERIFY_MSG;

	ft_wait();

	// ft_putendl.c
	printf(YELLOW"ft_putendl :\n"WHITE"\tprintf		-> %s\n\tft_putendl -> ",
			s1);
	fflush(stdout);
	ft_putendl(s1);
	VERIFY_MSG;

	ft_wait();

	// ft_putnbr.c
	int		n1[8] = {INT_MIN, -123, -5, 0, 9, 10, 5647, INT_MAX};
	printf(YELLOW"ft_putnbr :\n"WHITE);
	i = -1;
	while (++i < 8)
	{
		printf("\tprintf	-> %d\n\tft_putnbr -> ", n1[i]);
		fflush(stdout);
		ft_putnbr(n1[i]);
		NEWLINE;
	}
	VERIFY_MSG;

	ft_wait();

	// ft_puchar_fd.c
	printf(YELLOW"ft_putchar_fd :\n"WHITE"\tprintf		  -> %c\n"
			"\tft_putchar_fd -> ", c1);
	fflush(stdout);
	ft_putchar_fd(c1, STDOUT_FILENO);
	NEWLINE;
	VERIFY_MSG;

	ft_wait();

	// ft_putstr_fd.c
	printf(YELLOW"ft_putstr_fd :\n"WHITE"\tprintf		-> %s\n"
			"\tft_putstr_fd -> ", s1);
	fflush(stdout);
	ft_putstr_fd(s1, STDOUT_FILENO);
	NEWLINE;
	VERIFY_MSG;

	ft_wait();

	// ft_putendl_fd.c
	printf(YELLOW"ft_putendl_fd :\n"WHITE"\tprintf		  -> %s\n"
			"\tft_putendl_fd -> ", s1);
	fflush(stdout);
	ft_putendl_fd(s1, STDOUT_FILENO);
	VERIFY_MSG;

	ft_wait();

	// ft_putnbr_fd.c
	printf(YELLOW"ft_putnbr_fd :\n"WHITE);
	i = -1;
	while (++i < 8)
	{
		printf("\tprintf	   -> %d\n\tft_putnbr_fd -> ", n1[i]);
		fflush(stdout);
		ft_putnbr_fd(n1[i], STDOUT_FILENO);
		NEWLINE;
	}
	VERIFY_MSG;

	ft_wait();

	// ft_strcmp.c
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
		printf("\ts1 -> %s\n\ts2 -> %s\n\tstrcmp	-> %d\n\tft_strcmp -> "
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

	ft_wait();

	// ft_strncmp.c
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
		printf("\ts1 -> %s\n\ts2 -> %s\n\tn  -> %d\n\tstrncmp	 -> %d\n"
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

	ft_wait();

	// ft_strcpy.c
	printf(YELLOW"ft_strcpy :\n"WHITE);
	char		*s4[4];
	i = -1;
	j = 0;
	while (++i < 4)
	{
		if (!(s4[i] = malloc(sizeof(*(s4[i])) * ft_strlen(s2[i]))))
			return (EXIT_FAILURE);
		printf("\tstrcpy	-> %s\n\tft_strcpy -> %s\n\t", strcpy(s4[i], s2[i]),
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

	ft_wait();

	// ft_strncpy.c
	printf(YELLOW"ft_strncpy :\n"WHITE);
	int			n3[] = {8, 12, 30, 17};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		if (!(s4[i] = malloc(sizeof(*(s4[i])) * ft_strlen(s2[i]))))
			return (EXIT_FAILURE);
		printf("\tstrncpy	 -> %s\n\tft_strncpy -> %s\n\t",
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

	ft_wait();

	// ft_strcat.c
	printf(YELLOW"ft_strcat :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\tstrcat	-> %s\n\tft_strcat -> %s\n\t", strcat(s3[i], s2[i]),
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

	ft_wait();

	// ft_strncat.c
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
		printf("\tstrncat	 -> %s\n\tft_strncat -> %s\n\t",
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

	ft_wait();

	// ft_toupper.c
	printf(YELLOW"ft_toupper :\n"WHITE);
	char		c2[] = {'a', 'A', 'z', 'Z', '0', '9', ' ', '~', 14, 127};
	i = -1;
	j = 0;
	while (++i < 8)
	{
		printf("\ttoupper	 %c -> %c\n\tft_toupper %c -> %c\n\t", c2[i],
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

	ft_wait();

	// ft_tolower.c
	printf(YELLOW"ft_tolower :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 8)
	{
		printf("\ttolower	 %c -> %c\n\tft_tolower %c -> %c\n\t", c2[i],
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

	ft_wait();

	// ft_isalpha.c	
	printf(YELLOW"ft_isalpha :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisalpha	%c -> %d\n\tft_isalpha %c -> %d\n\t", c2[i],
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

	ft_wait();

	// ft_isdigit.c	
	printf(YELLOW"ft_isdigit :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisdigit	%c -> %d\n\tft_isdigit %c -> %d\n\t", c2[i],
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

	ft_wait();

	// ft_isalpha.c	
	printf(YELLOW"ft_isalnum :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisalnum	%c -> %d\n\tft_isalnum %c -> %d\n\t", c2[i],
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

	ft_wait();

	// ft_isascii.c	
	printf(YELLOW"ft_isascii :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisascii	%c -> %d\n\tft_isascii %c -> %d\n\t", c2[i],
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

	ft_wait();

	// ft_isprint.c	
	printf(YELLOW"ft_isprint :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tisprint	%c -> %d\n\tft_isprint %c -> %d\n\t", c2[i],
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

	ft_wait();

	// ft_atoi.c
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
		printf("\tatoi	  %s -> %d\n\tft_atoi %s -> %d\n\t", s5[i],
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

	ft_wait();

	// ft_itoa.c
	printf(YELLOW"ft_itoa :\n"WHITE);
	int			n5[] = {0, INT_MIN, INT_MAX, 3245, -453, 10, -10, -9, 5, -100};
	i = -1;
	j = 0;
	while (++i < 10)
	{
		printf("\tft_itoa %d -> \"%s\"\n\t", n5[i], ft_itoa(n5[i]));
		if (n5[i] == ft_atoi(ft_itoa(n5[i])))
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

	ft_wait();

	// ft_strstr.c
	printf(YELLOW"ft_strstr :\n"WHITE);
	char		s6[5][50] =
	{
		"la premiere chaine",
		"la seconde chaine",
		"lalalaala",
		"encore une chaine",
		"la derniere"
	};
	char		s7[5][50] =
	{
		"la",
		"chaine",
		"laa",
		"",
		"la derniere des chaines"
	};
	i = -1;
	j = 0;
	while (++i < 5)
	{
		printf("\tstrstr	  %s :: %s -> %s\n\tft_strstr %s :: %s -> %s\n\t",
				s6[i], s7[i], strstr(s6[i], s7[i]), s6[i], s7[i],
				ft_strstr(s6[i], s7[i]));
		if (strstr(s6[i], s7[i]) != NULL)
		{
			if (strcmp(strstr(s6[i], s7[i]), ft_strstr(s6[i], s7[i])) == 0)
				SUCCESS_MSG;
			else
			{
				FAILURE_MSG;
				j = 1;
			}
		}
		else if (ft_strstr(s6[i], s7[i]) == NULL)
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

	ft_wait();

	// ft_strnstr.c
	printf(YELLOW"ft_strnstr :\n"WHITE);
	int			n6[] = {5, 3, 3, 2, 0};
	i = -1;
	j = 0;
	while (++i < 5)
	{
		printf("\tstrnstr	 %s :: %s %d -> %s\n\tft_strnstr %s :: %s %d -> %s\n"
				"\t", s6[i], s7[i], n6[i], strnstr(s6[i], s7[i], n6[i]), s6[i],
				s7[i], n6[i], ft_strnstr(s6[i], s7[i], n6[i]));
		if (strnstr(s6[i], s7[i], n6[i]) != NULL)
		{
			if (strcmp(strnstr(s6[i], s7[i], n6[i]),
						ft_strnstr(s6[i], s7[i], n6[i])) == 0)
				SUCCESS_MSG;
			else
			{
				FAILURE_MSG;
				j = 1;
			}
		}
		else if (ft_strnstr(s6[i], s7[i], n6[i]) == NULL)
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

	ft_wait();

	// ft_strchr.c
	printf(YELLOW"ft_strchr :\n"WHITE);
	int			c3[] = {'l', 'n', '\0', 'w', 'e'};
	i = -1;
	j = 0;
	while (++i < 5)
	{
		printf("\tstrchr	  %s :: %c -> %s\n\tft_strchr %s :: %c -> %s\n\t",
				s6[i], c3[i], strchr(s6[i], c3[i]), s6[i], c3[i],
				ft_strchr(s6[i], c3[i]));
		if (strchr(s6[i], c3[i]) != NULL)
		{
			if (strcmp(strchr(s6[i], c3[i]), ft_strchr(s6[i], c3[i])) == 0)
				SUCCESS_MSG;
			else
			{
				FAILURE_MSG;
				j = 1;
			}
		}
		else if (ft_strchr(s6[i], c3[i]) == NULL)
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

	ft_wait();

	// ft_strrchr.c
	printf(YELLOW"ft_strrchr :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 5)
	{
		printf("\tstrrchr	  %s :: %c -> %s\n\tft_strrchr %s :: %c -> %s\n\t",
				s6[i], c3[i], strrchr(s6[i], c3[i]), s6[i], c3[i],
				ft_strrchr(s6[i], c3[i]));
		if (strrchr(s6[i], c3[i]) != NULL)
		{
			if (strcmp(strrchr(s6[i], c3[i]), ft_strrchr(s6[i], c3[i])) == 0)
				SUCCESS_MSG;
			else
			{
				FAILURE_MSG;
				j = 1;
			}
		}
		else if (ft_strrchr(s6[i], c3[i]) == NULL)
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

	ft_wait();
////////////////////////////////////////////////////////////////////////////////
	// ft_memalloc.c
	printf(YELLOW"ft_memalloc :\n"WHITE);
	char		*s8;
	if (!(s8 = (char*)ft_memalloc(42)))
		return (0);
	i = -1;
	j = 0;
	while (s8[++i] < 42)
		if (s8[i] != 0)
			j = 1;
/*	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;
*/
	NOT_TESTED_MSG;

	ft_wait();

	// ft_memdel.c
	printf(YELLOW"ft_memdel :\n"WHITE);
	ft_memdel((void**)&s8);
	if (s8 == NULL)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();
///////////////////////////////////////////////////////////////////////////////
	// ft_strnew.c
	printf(YELLOW"ft_strnew :\n"WHITE);
	char		*s90;
	s90 = (char*)ft_strnew(42);
	i  = -1;
	j = 0;
	while (s90[++i] < 42)
		if (s90[i] != 0)
			j = 1;
/*	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;
*/
	NOT_TESTED_MSG;

	ft_wait();

	// ft_memdel.c
	printf(YELLOW"ft_strdel :\n"WHITE);
	ft_strdel(&s8);
	if (s8 == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_strclr.c
	printf(YELLOW"ft_strclr :\n"WHITE);
	s8 = ft_strnew(3);
	s8[0] = 'a';
	s8[1] = 'b';
	s8[2] = '\0';
	ft_strclr(s8);
	if (s8[0] == s8[1] && s8[1] == s8[2] && s8[0] == '\0')
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_striter.c
	printf(YELLOW"ft_striter :\n"WHITE);
	char		s9[] = "test de str";
	printf("\tprintf		 -> %s\n\tft_striter(f1) -> ", s9);
	ft_striter(s9, &ft_f1);
	printf("%s\n", s9);
	if (strcmp(s9, "uftu!ef!tus") == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_striteri.c
	printf(YELLOW"ft_striteri :\n"WHITE);
	printf("\tprintf		  -> %s\n\tft_striteri(f2) -> ", s9);
	ft_striteri(s9, &ft_f2);
	printf("%s\n", s9);
	if (strcmp(s9, "vfuu\"eg!uut") == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_strmap.c
	printf(YELLOW"ft_strmap :\n"WHITE);
	char		*s10;
	s10 = ft_strmap(s9, &ft_f3);
	printf("\tprintf		   -> %s\n\tft_strmap(ft_f3) -> %s\n", s9, s10);
	if (strcmp(s10, "uett!df tts") == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_strmapi.c
	printf(YELLOW"ft_strmapi :\n"WHITE);
	s10 = ft_strmapi(s9, &ft_f4);
	printf("\tprintf			-> %s\n\tft_strmapi(ft_f4) -> %s\n", s9, s10);
	if (strcmp(s10, "uftu!ef!tus") == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_strequ.c
	printf(YELLOW"ft_strequ :\n"WHITE);
	char	s11[4][100] =
	{
		"la str 1",
		"une autre str pour des tests",
		"encore une str",
		"et... la derniere"
	};
	char		s12[4][100] =
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
		printf("\ts1 -> %s\n\ts11 -> %s\n\tstrcmp	 -> %d\n\tft_strequ -> "
				"%d\n\t", s12[i], s11[i], 
				strcmp(s12[i], s11[i]),
				ft_strequ(s12[i], s11[i]));
		if ((strcmp(s12[i], s11[i]) == 0 && ft_strequ(s12[i], s11[i]) == 1) ||
				(strcmp(s12[i], s11[i]) != 0 && ft_strequ(s12[i], s11[i]) == 0))
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

	ft_wait();

	// ft_strnequ.c
	printf(YELLOW"ft_strnequ :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\ts1 -> %s\n\ts2 -> %s\n\tn  -> %d\n\tstrncmp	 -> %d\n"
				"\tft_strnequ -> %d\n\t", s12[i], s11[i], n2[i],
				strncmp(s12[i], s11[i], n2[i]), ft_strnequ(s12[i], s11[i], n2[i]));
		if ((strncmp(s12[i], s11[i], n2[i]) == 0 && ft_strnequ(s12[i], s11[i], n2[i]) == 1) ||
				(strncmp(s12[i], s11[i], n2[i]) != 0 && ft_strnequ(s12[i], s11[i], n2[i]) == 0))
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

	ft_wait();

	// ft_strsub.c
	printf(YELLOW"ft_strsub :\n"WHITE);
	int			n7[] = {0, 4, 6, 5};
	int			n8[] = {ft_strlen(s11[0]), 8, 6, ft_strlen(s11[3]) - 5};
	i = -1;
	while (++i < 4)
	{
		printf("\ts		-> %s\n\tstart -> %d\n\tlen   -> %d\n\tft_strsub -> %s\n"
				, s11[i], n7[i], n8[i], ft_strsub(s11[i], n7[i], n8[i]));
	}
	VERIFY_MSG;

	ft_wait();

	// ft_strjoin.c
	printf(YELLOW"ft_strjoin :\n"WHITE);
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\ts1 -> %s\n\ts2 -> %s\n\tft_strjoin -> %s\n\t", s12[i],
				s11[i], ft_strjoin(s12[i], s11[i]));
		if (strcmp(ft_strjoin(s12[i], s11[i]), strcat(s12[i], s11[i])) == 0)
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

	ft_wait();

	// ft_strstrim.c
	printf(YELLOW"ft_strstrim :\n"WHITE);
	char	s13[6][100] =
	{
		"	   la str 1			",
		"\t\t  \t\t\n une autre str pour des tests",
		"encore une str\t\n		\t\t\n\n   \n",
		"et... la derniere",
		"",
		"	   \t\t\n\n    \n\n"
	};
	i = -1;
	j = 0;
	while (++i < 6)
		printf("\ts -> \"%s\"\n\tft_strtrim -> \"%s\"\n\n", s13[i],
				ft_strtrim(s13[i]));
	VERIFY_MSG;

	ft_wait();

	// ft_strsplit.c
	printf(YELLOW"ft_strplit :\n"WHITE);
	char		s14[7][100] =
	{
		"*****la***str*1*",
		"une autre str pour des tests",
		"encore\tune\tstr",
		"une de plus pour le split des u",
		"rrrrrrrrrr",
		"",
		"seksek"
	};
	char		c4[7] = {'*', ' ', '\t', 'u', 'r', 'f', '\n'};
	char		***s15;
	if (!(s15 = malloc(sizeof(**s15) * 7)))
		return (0);
	i = -1;
	while (++i < 7)
	{
		printf("\ts -> \"%s\"\n", s14[i]);
		s15[i] = ft_strsplit(s14[i], c4[i]);
		j = -1;
		while (s15[i][++j] != 0)
		{
			printf("\t\t\"%s\"\n", s15[i][j]);
		}
	}
	VERIFY_MSG;

	ft_wait();

	// ft_strdup.c
	printf(YELLOW"ft_ strdup:\n"WHITE);
	char		**s16;
	char		**s17;
	if (!(s16 = malloc(sizeof(**s16) * 2)))
		return (0);
	if (!(s16[0] = malloc(sizeof(*s16) * 7)))
		return (0);
	if (!(s17 = malloc(sizeof(**s17) * 2)))
		return (0);
	strcpy(s16[0], "seksek");
	s17[0] = strdup(s16[0]);
	s17[1] = ft_strdup(s16[0]);
	printf("\ts			-> %s\n\tstrdup    -> %s\n\tft_strdup -> %s\n", s16[0],
			s17[0], s17[1]);
	if (strcmp(s17[0], s17[1]) == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_memset.c
	printf(YELLOW"ft_memset:\n"WHITE);
	char	*s18 = ft_strdup("test de memset");
	ft_memset(s18, 'a', ft_strlen(s8));
	i = -1;
	j = 0;
	while (++i < (int)ft_strlen(s8))
	{
		if (s8[i] != 'a')
			j = 1;
	}
	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_bzero.c
	printf(YELLOW"ft_bzero:\n"WHITE);
	ft_bzero(s18, ft_strlen(s18));
	i = -1;
	j = 0;
	while (++i < (int)ft_strlen(s18))
	{
		if (s18[i] != 0)
			j = 1;
	}
	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_memcpy.c
	printf(YELLOW"ft_memcpy:\n"WHITE);
	char		*s19 = ft_strdup("seksek");
	char		*s20 = ft_strdup("coucou");
	ft_memcpy(s19, s20, ft_strlen(s19) + 1);
	if (strcmp(s19, s20) == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_memccpy.c
	printf(YELLOW"ft_memccpy:\n"WHITE);
	char	*s21 = NULL;
	s19 = ft_strdup("seksek a seksek");
	s20 = ft_strdup("bbbbbbbbbbbbbbbbbbb");
	s21 = ft_strdup(s20);
	memccpy(s20, s19, 'a', ft_strlen(s19) + 1);
	ft_memccpy(s21, s19, 'a', ft_strlen(s19) + 1);
	printf("\tsrc : %s\n\tmemccpy    : %s\n\tft_memccpy : %s\n", s19, s20, s21);
	if (strcmp(s20, s21) == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_memmove.c
	printf(YELLOW"ft_memmove:\n"WHITE);
	s19 = ft_strdup("seksek a seksek");
	s20 = ft_strdup("coucou seksek ls");
	s21 = ft_strdup(s20);
	memmove(s20, s19, ft_strlen(s19) + 1);
	ft_memmove(s21, s19, ft_strlen(s19) + 1);
	printf("\tmemmove    : %s\n\tft_memmove : %s\n", s20, s21);
	if (strcmp(s20, s21) == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;
	
	ft_wait();

	// ft_memchr.c
	printf(YELLOW"ft_memchr:\n"WHITE);
	s21 = ft_strdup("je cherche dans cette chaine.");
	char	s22[5] = {'j', '.', '\0', 'd', '-'};
	char	*s23;
	char	*s24;
	printf("\tsrc : %s\n", s21);
	i = -1;
	j = 0;
	while (++i < 5)
	{
		s23 = memchr(s21, s22[i], ft_strlen(s21) + 1);
		s24 = ft_memchr(s21, s22[i], ft_strlen(s21) + 1);
		printf("\tmemchr    %c : %s\n\tft_memchr %c : %s\n\t", s22[i], s23,
				s22[i], s24);
		if (s23 == NULL || s24 == NULL)
		{
			if (s23 == s24)
				SUCCESS_MSG;
			else
			{
				j = 1;
				FAILURE_MSG;
			}
		}
		else if (strcmp(s23, s24) != 0)
		{
			j = 1;
			FAILURE_MSG;
		}
		else
			SUCCESS_MSG;
	}
	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	// ft_memcmp.c
	printf(YELLOW"ft_memcmp :\n"WHITE);
	char	s25[4][100] =
	{
		"aab",
		"une autre str pour des tests",
		"encore une str",
		"et... la derniere"
	};
	char		s26[4][100] =
	{
		"aac",
		"une autre str pour des tests plus long",
		"encore",
		""
	};
	int		n9[] = {
		2,
		ft_strlen(s26[1]) - 2,
		0,
		5
	};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		printf("\ts1 -> %s\n\ts2 -> %s\n\tn  -> %d\n\tmemcmp	 -> %d\n"
				"\tft_memcmp -> %d\n\t", s26[i], s25[i], n9[i],
				memcmp(s26[i], s25[i], n9[i]), ft_memcmp(s26[i], s25[i], n9[i]));
		if (memcmp(s26[i], s25[i], n9[i]) == ft_memcmp(s26[i], s25[i], n9[i]))
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

	ft_wait();

	// ft_strlcat.c
	printf(YELLOW"ft_strlcat :\n"WHITE);
	char	s27[4][100] =
	{
		"la str 1",
		"la deuxieme str pour des tests",
		"encore une str",
		"et... la derniere"
	};
	char		s28[4][100] =
	{
		"la str 1",
		"une autre str pour des tests plus long",
		"une autre",
		""
	};
	char		*s29[4];
	int			n10[] =
	{
		ft_strlen(s28[0]) + ft_strlen(s27[0]) + 1,
		5,
		16,
		0
	};
	i = -1;
	j = 0;
	while (++i < 4)
	{
		s29[i] = ft_strdup(s28[i]);
		printf("\tdst -> '%s'\n\tsrc -> '%s'\n\tsize -> %d\n", s27[i], s28[i],
				n10[i]);
		printf("\tstrlcat    %lu -> ", strlcat(s29[i], s27[i], n10[i]));
		printf("'%s'\n", s29[i]);
		s29[i] = ft_strdup(s28[i]);
		printf("\tft_strlcat %lu -> ", ft_strlcat(s29[i], s27[i], n10[i]));
		printf("'%s'\n\t", s29[i]);
		s29[i] = ft_strdup(s28[i]);
		if (strlcat(s28[i], s27[i], n10[i]) ==
				ft_strlcat(s29[i], s27[i], n10[i]))
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

	ft_wait();

	ft_list();

	ft_wait();

	////////////////////////////////////////////////////////////////////////////
	printf(YELLOW"all:\n"WHITE);
	if (ok == 1)
		FAILURE_MSG;
	else
		SUCCESS_MSG;
	////////////////////////////////////////////////////////////////////////////
	return (EXIT_SUCCESS);
}

void		ft_del(void *content, size_t size_content)
{
	(void)size_content;
	free(content);
}

void		ft_lstsetcont(t_list *elem)
{
	ft_strcpy((char*)elem->content, "seksek");
	elem->content_size = ft_strlen((char*)elem->content);
}

t_list		*ft_lstmapcpy(t_list *elem)
{
	t_list	*ret;
	
	(void)elem;
	ret = ft_lstnew("new list", 9);
	return (ret);
}

void		ft_list(int *ok2)
{
	int		i;
	int		j;
	int		ok;

	ok = 0;
	(void)i;
	(void)j;

	//ft_lstnew.c
	printf(YELLOW"ft_lstnew :\n"WHITE);
	t_list		*list1;
	char		*content1 = ft_strdup("content");
	size_t		content_size1 = ft_strlen(content1);

	list1 = ft_lstnew(content1, content_size1);
	j = 0;
	if (memcmp(content1, list1->content, content_size1) != 0)
	{
		printf(RED"\tERROR :"WHITE" content != list1->content\n");
		j = 1;
	}
	if (content_size1 != list1->content_size)
	{
		printf(RED"\tERROR :"WHITE" content_size != list1->content_size\n");
		j = 1;
	}
	if (list1->next != NULL)
	{
		printf(RED"\tERROR :"WHITE" list1->next != NULL\n");
		j = 1;
	}
	if (content1 == list1->content)
	{
		printf(RED"\tERROR :"WHITE" content1 and list1->content are the same "
				"variable not copy\n");
		j = 1;
	}
	if (j == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	ft_wait();

	//ft_lstdelone.c
	printf(YELLOW"ft_lstdelone :\n"WHITE);
	ft_lstdelone(&list1, &ft_del);
	if (list1 == NULL)
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	//ft_lstdel.c
	printf(YELLOW"ft_lstdel :\n"WHITE);
	t_list		*list2;
	t_list		*list3;
	t_list		*list4;

	list2 = ft_lstnew("seksek", 7);
	list3 = ft_lstnew("coucou", 7);
	list2->next = list3;
	list4 = ft_lstnew("ok", 3);
	list3->next = list4;
	ft_lstdel(&list2, &ft_del);
	NOT_TESTED_MSG;

	//ft_lstadd.c
	printf(YELLOW"ft_lstadd :\n"WHITE);
	list1 = ft_lstnew("hello", 6);
	list2 = ft_lstnew("seksek", 7);
	list3 = ft_lstnew("coucou", 7);
	list4 = ft_lstnew("ok", 3);

	ft_lstadd(&list4, list3);
	ft_lstadd(&list3, list2);
	ft_lstadd(&list2, list1);
	if (ft_memcmp(list1->next->content, list2->content, list2->content_size) &&
					ft_memcmp(list1->next->next->next->content,
						list4->content, list4->content_size))
		SUCCESS_MSG;
	else
		FAILURE_MSG;

	//ft_lstiter.c
	printf(YELLOW"ft_lstiter :\n"WHITE);
	ft_lstiter(list1, &ft_lstsetcont);
	if (ft_memcmp(list1->content, list2->content, list3->content_size) == 0 &&
		ft_memcmp(list3->content, list4->content, list1->content_size) == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;
	
	//ft_lstmap.c
	printf(YELLOW"ft_lstmap :\n"WHITE);
	t_list	*list5;
	char	*s30 = ft_strdup("new list");
	list5 = ft_lstmap(list1, &ft_lstmapcpy);
	if (ft_memcmp(list5->content, (void*)s30, list5->content_size) == 0 &&
			ft_memcmp(list5->next->next->next->content, list5->content,
			list5->next->next->content_size) == 0)
		SUCCESS_MSG;
	else
		FAILURE_MSG;
	if (*ok2 == 0 && ok == 1)
		*ok2 = 1;
}
