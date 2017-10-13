/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_memcpy.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/21 17:05:03 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/21 17:05:03 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	(void)src;(void)dst;
	i = -1;
	while ((size_t)++i < n)
		;//(char)(dst[i]) = (char)(src[i]);
	return (dst);
}
