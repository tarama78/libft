/* ************************************************************************** */
/*																			  */
/*														   :::		::::::::  */
/*   ft_strnew.c										:+:		 :+:	:+:   */
/*													   +:+ +:+		   +:+	  */
/*   By: tnicolas <marvin@42.fr>					 +#+  +:+		+#+		  */
/*												   +#+#+#+#+#+	 +#+		  */
/*   Created: 2017/09/20 11:29:40 by tnicolas			 #+#	#+#			  */
/*   Updated: 2017/09/20 11:29:40 by tnicolas			###   ########.fr	  */
/*																			  */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char		*ft_strnew(size_t size)
{
	char	*ret;

	if (!(ret = (char*)malloc(size)))
		return (NULL);
	while (--size > 0)
		ret[size] = 0;
	ret[0] = 0;
	return (ret);
}
