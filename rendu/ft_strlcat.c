/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*	 ft_strlcat.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*	 By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*	 Created: 2017/09/24 11:29:55 by tnicolas			 #+#	#+#			  */
/*	 Updated: 2017/09/24 11:29:55 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		n;
	size_t	ret;
	int		i;

	n = (int)size - (int)ft_strlen(dst) - 1;
	if (n < 0)
		return (size + ft_strlen(src));
	ret = ft_strlen(dst);
	i = -1;
	while (++i < n && *src)
		dst[ret + i] = *(src++);
	if (i < n)
		dst[ret + i] = '\0';
	return (ft_strlen(dst));
}
