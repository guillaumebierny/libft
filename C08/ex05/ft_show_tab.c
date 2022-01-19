/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:17:05 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/02 19:50:03 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar(nb % 10 + 48);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	if (!par)
		return ;
	while (par[++i].str)
	{
		ft_putstring(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstring(par[i].copy);
		ft_putchar('\n');
	}
}
