/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get2arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:32:32 by tnicolas          #+#    #+#             */
/*   Updated: 2017/12/21 11:11:26 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_get2arg(long long arg, int n)
{
	int		bit;

	bit = sizeof(long long) * 4;
	if (n == 0)
		return ((int)((arg << bit) >> bit));
	return ((int)(arg >> bit));
}
