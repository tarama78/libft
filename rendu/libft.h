/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:18:11 by tnicolas          #+#    #+#             */
/*   Updated: 2017/09/18 13:18:11 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define ISSPACE(c) (c == ' ' || c == '\t' || c == '\n' || c == '\v' || \
		c == '\f' || c == '\r') ? 1 : 0

size_t		ft_strlen(const char *s);
void		ft_putchar(char c);
void		ft_putstr(const char *s);
void		ft_putendl(const char *s);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(const char *s, int fd);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_atoi(const char *nptr);

#endif
