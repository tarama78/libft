/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:27:46 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/07 11:27:49 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;

	i = -1;
	while (++i < (int)n && (int)((char*)src)[i] != c)
		((char*)dst)[i] = ((char*)src)[i];
	return (dst);
}
