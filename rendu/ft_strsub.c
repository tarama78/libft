/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_strsub.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/20 14:56:10 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/20 14:56:10 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		i;

	if (!(ret = ft_strnew(sizeof(*ret) * (len + 1))))
		return (NULL);
	s += start;
	i = -1;
	while (++i < len)
		ret[i] = s[i];
	ret[i] = '\0';
	return (ret);
}
