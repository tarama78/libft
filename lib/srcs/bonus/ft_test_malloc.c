/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 17:41:21 by tnicolas          #+#    #+#             */
/*   Updated: 2018/02/08 19:14:34 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   ____________________________________________________________
**   | ft_test_malloc.c                                         |
**   |     ft_test_malloc(5 lines)                              |
**   ------------------------------------------------------------
**           __n__n__  /
**    .------`-\00/-'/
**   /  ##  ## (oo)
**  / \## __   ./
**     |//YY \|/
**     |||   |||
*/

#include <libft.h>

void		ft_test_malloc(size_t size)
{
	void	*le_malloc_pour_tester;

	if (!(le_malloc_pour_tester = malloc(size)))
		exit(EXIT_FAILURE);
	ft_fruit(1, &le_malloc_pour_tester);
}
