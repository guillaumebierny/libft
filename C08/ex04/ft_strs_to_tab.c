/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:12:18 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/02 19:58:01 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_dup(char *str)
{
	char	*dup;
	int		i;

	i = -1;
	if (!str)
		return (0);
	dup = (char *)malloc(sizeof(char) * (ft_len(str) + 1));
	if (!dup)
		return (0);
	while (str[++i])
		dup[i] = str[i];
	dup[i] = 0;
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = -1;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (++i < ac)
	{
		tab[i].size = ft_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_dup(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
