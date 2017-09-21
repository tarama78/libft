/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:17:18 by tnicolas          #+#    #+#             */
/*   Updated: 2017/09/19 18:17:18 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		while (*haystack != *needle && *haystack && *needle)
			haystack++;
		if (*needle == '\0' || *haystack == '\0')
			return (NULL);
		i = 0;
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (haystack[i - 1] == needle[i - 1] && needle[i] == '\0')
		   return((char*)haystack);
		if (haystack[i] == '\0')
			return (NULL);
		haystack++;
	}
	return (NULL);
}
