/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:38:57 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/07 15:33:43 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;

	i = -1;
	while (dst[++i])
		;
	j = -1;
	while (src[++j] && size-- - ft_strlen(dst) - 1 > 0)
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
