/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_memcmp.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/21 17:22:23 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/21 17:22:23 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;

	i = -1;
	while (*(unsigned char*)s1 == *(unsigned char*)s2 && (size_t)++i < n)
	{
		s1 += sizeof(*s1);
		s2 += sizeof(*s2);
	}
	return (s1 - s2);
}
