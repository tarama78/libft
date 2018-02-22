/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fruit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:45:25 by tnicolas          #+#    #+#             */
/*   Updated: 2018/02/22 11:04:13 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   ____________________________________________________________
**   | ft_fruit.c                                               |
**   |     ft_fruit(12 lines)                                   |
**   ------------------------------------------------------------
**           __n__n__  /
**    .------`-\00/-'/
**   /  ##  ## (oo)
**  / \## __   ./
**     |//YY \|/
**     |||   |||
*/

#include <stdarg.h>
#include <stdlib.h>

int		ft_fruit(size_t n, ...)
{
	void	**del;
	va_list	ap;

	va_start(ap, n);
	while (n-- > 0)
	{
		del = va_arg(ap, void **);
		free(*del);
		*del = NULL;
	}
	va_end(ap);
	return (1);
}
