/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:43:34 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/27 11:03:12 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);
int	ft_len(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		res;

	res = 1;
	i = -1;
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{
			res = ft_strcmp(to_find, str + i);
			if (res == 0)
				return (str + i);
		}
	}
	if (ft_len(to_find))
		return (0);
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}

int	ft_len(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}
