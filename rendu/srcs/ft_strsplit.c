/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:00:05 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/09 15:09:02 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_count_word(const char *s, char c)
{
	int		nb_word;

	while (*s == c && *s)
		s++;
	if (*s == '\0')
		return (0);
	nb_word = 0;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		nb_word++;
		while (*s == c && *s)
			s++;
	}
	return (nb_word);
}

static char	*ft_create_word(char **s, char c)
{
	char	*ret;
	int		i;

	while (**s == c && **s)
		(*s)++;
	if (**s == '\0')
		return (NULL);
	i = -1;
	while ((*s)[++i] != c && (*s)[i])
		;
	if (!(ret = ft_strnew(sizeof(*ret) * (i + 1))))
		return (NULL);
	i = 0;
	while (**s != c && **s)
		ret[i++] = *(*s)++;
	ret[i] = '\0';
	return (ret);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**ret;
	int		nb_word;
	int		i;

	if (s == NULL)
		return (NULL);
	nb_word = ft_count_word(s, c);
	if (!(ret = ft_memalloc(sizeof(*ret) * (nb_word + 1))))
		return (NULL);
	i = -1;
	while (++i < nb_word)
	{
		if (!(ret[i] = ft_create_word((char**)&s, c)))
			return (NULL);
	}
	ret[nb_word] = 0;
	return (ret);
}
