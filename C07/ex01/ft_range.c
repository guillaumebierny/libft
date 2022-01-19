/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:58:14 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/01 17:24:24 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*tab;

	i = -1;
	if (min >= max)
		return (0);
	range = max - min;
	tab = (int *)malloc((sizeof(int) * range));
	if (!tab)
		return (0);
	while (++i < range)
	{
		tab[i] = min++;
	}
	return (tab);
}
