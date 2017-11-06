/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_strmap.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/20 13:53:01 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/20 13:53:01 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(const char *s, char (*f)(char))
{
	char	*ret;
	int		i;

	i = -1;
	while (s[++i])
		;
	if (!(ret = ft_strnew(sizeof(*ret) * (i + 1))))
		return (NULL);
	i = -1;
	while (s[++i])
		ret[i] = f(s[i]);
	ret[i] = '\0';
	return (ret);
}
