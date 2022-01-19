/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:27:49 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/01 18:04:04 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = -1;
	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	while (++i < size)
	{
		(*range)[i] = min++;
	}
	return (size);
}
