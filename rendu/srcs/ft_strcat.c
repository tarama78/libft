/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:57:26 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/07 09:57:27 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	i = -1;
	while (dest[++i])
		;
	j = -1;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
