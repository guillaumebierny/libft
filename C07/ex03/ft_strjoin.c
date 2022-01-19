/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:12:47 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/01 17:16:09 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	i--;
	return (i);
}

char	*duplicate_all(int size, char **strs, char *sep, char *tot_tab)
{
	int	i;
	int	j;
	int	t;

	t = 0;
	j = -1;
	while (++j < size)
	{
		i = -1;
		while (strs[j][++i])
		{
			tot_tab[t++] = strs[j][i];
		}
		if (j < size -1)
		{
			i = -1;
			while (sep[++i])
			{
				tot_tab[t++] = sep[i];
			}
		}
	}
	tot_tab[t] = '\0';
	return (tot_tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tot_size;
	char	*tot_tab;

	i = -1;
	tot_size = 0;
	if (size <= 0)
	{
		tot_tab = 0;
		return (tot_tab);
	}
	while (strs[++i])
	{
		tot_size += ft_strlen(*strs + i);
	}
		tot_size += (ft_strlen(sep) * size -1);
	tot_size += 1;
	tot_tab = (char *)malloc(sizeof(char) * (tot_size + 1));
	if (!tot_tab)
		return (0);
	return (duplicate_all(size, strs, sep, tot_tab));
}
