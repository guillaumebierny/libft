/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:53:52 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/26 18:58:15 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_int(char *str);
int	len_int(int i);
int	neg(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| (str[i] == 32))
	{
		i ++;
	}
	if (str[i] == '-' || str[i] == '+')
		res = neg(str + i);
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	res *= count_int(str + i);
	return (res);
}

int	neg(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = -1;
	while (str[++i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			res ++;
	}
	res = res % 2;
	if (res == 0)
		return (1);
	else
		return (-1);
}

int	count_int(char *str)
{
	int	i;
	int	t;
	int	res;

	res = 0;
	t = -1;
	while (str[++t] >= 48 && str[t] <= 57)
	{
		i = 0;
		while (str[t + i] >= 48 && str[t + i] <= 57)
		{
			i++;
		}
		if (i > 1)
			res += (str[t] - 48) * len_int(i - 1);
		else if (i == 1)
			res += (str[t] - 48);
	}
	return (res);
}

int	len_int(int i)
{
	int	mult;

	mult = 1;
	while (i != 0)
	{
		mult *= 10;
		i --;
	}
	return (mult);
}
