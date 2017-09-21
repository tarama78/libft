/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_strjoin.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/20 15:17:19 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/20 15:17:19 by tnicolas			###   ########.fr     */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;

	if (!(ret = ft_strnew(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2) - 1))))
		return (NULL);
	ft_strncpy(ret, s1, ft_strlen(s1));
	ft_strncat(ret, s2, ft_strlen(s2));
	return (ret);
}
