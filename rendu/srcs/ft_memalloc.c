/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:47:54 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/07 10:23:15 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void		*ft_memalloc(size_t size)
{
	void	*ret;

	if (!(ret = malloc(size)))
		return (NULL);
	while (--size > 0)
		((char*)ret)[size] = 0;
	((char*)ret)[0] = 0;
	return (ret);
}
