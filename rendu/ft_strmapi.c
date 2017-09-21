/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_strmapi.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/20 14:24:30 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/20 14:24:30 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	i = -1;
	while (s[++i])
		;
	if (!(ret = ft_strnew(sizeof(*ret) * (i + 1))))
		return (NULL);
	i = -1;
	while (s[++i])
		ret[i] = f(i, s[i]);
	ret[i] = '\0';
	return (ret);
}
