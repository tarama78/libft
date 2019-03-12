/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_alloc_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:52:54 by tnicolas          #+#    #+#             */
/*   Updated: 2018/06/25 18:02:21 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   ____________________________________________________________
**   | get_alloc_size.c                                         |
**   |     check_error(23 lines)                                |
**   |     get_alloc_size(3 lines)                              |
**   ------------------------------------------------------------
**           __n__n__  /
**    .------`-\00/-'/
**   /  ##  ## (oo)
**  / \## __   ./
**     |//YY \|/
**     |||   |||
*/

#include <ft_malloc.h>

size_t		get_alloc_size(void *ptr)
{
	if (is_allocated(ptr) == MALLOC_ERROR)
	{
		ft_printf("{red}{bold}MALLOC_ERROR: {eoc}{yellow}get_alloc_size({eoc}ptr=%p"
				"{yellow}){eoc}\n\tcan't return size: pointer not allocated\n",
				ptr);
		return (0);
	}
	return (((t_info*)(ptr - sizeof(t_info)))->official_size);
}
