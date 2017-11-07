/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:59:49 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/07 10:10:54 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack && len-- > 0)
	{
		while (*haystack != *needle && *haystack && *needle)
			haystack++;
		if (*needle == '\0' || *haystack == '\0')
			return (NULL);
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && len-- > 0)
			i++;
		if (haystack[i - 1] == needle[i - 1] && needle[i] == '\0')
			return ((char*)haystack);
		if (haystack[i] == '\0')
			return (NULL);
		haystack++;
	}
	return (NULL);
}
