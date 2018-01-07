/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:58:15 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/13 12:04:28 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst2_start;
	t_list	*lst2;

	if (lst)
	{
		lst2_start = f(lst);
		lst2 = lst2_start;
		while (lst->next)
		{
			lst = lst->next;
			lst2->next = f(lst);
			lst2 = lst2->next;
		}
	}
	else
		return (NULL);
	return (lst2_start);
}
