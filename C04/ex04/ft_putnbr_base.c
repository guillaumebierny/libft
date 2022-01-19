/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:08:41 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/26 18:59:59 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int		checkbase(char *str);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbrr(int nbr, char *base);

int	main()
{
	ft_putnbr_base(2147483647, "0123456789abcdef");
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkbase(char *str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
	}
	if (i < 2)
		return (0);
	i = -1;
	while (str[++i])
	{
		if (str[i] < 33 || str[i] > 126 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j])
				return (0);
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (checkbase(base) == 0)
		ft_putchar(checkbase(base) + 48);
	else
		ft_putnbrr(nbr, base);
}

void	ft_putnbrr(int nbr, char *base)
{
	int			i;
	int			size;
	long int	nb;

	nb = (long int)nbr;
	i = 0;
	size = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (base[i])
	{
		i ++;
	}
	size = i;
	if (nb < size)
		ft_putchar(base[nb % size]);
	else
	{
		ft_putnbr_base(nb / size, base);
		ft_putchar(base[nb % size]);
	}
}
