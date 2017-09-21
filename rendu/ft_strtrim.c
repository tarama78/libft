/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_strtrim.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/21 10:35:43 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/21 10:35:43 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strtrim(const char *s)
{
	char	*ret;
	int		i;
	int		len;

	while ((*s == ' ' || *s == '\t' || *s == '\n') && *s)
		s++;
	if (*s == '\0')
		return ((char*)'\0');
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	len++;
	if (!(ret = ft_strnew(sizeof(*ret) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		ret[i] = s[i];
	ret[i] = '\0';
	return (ret);
}
