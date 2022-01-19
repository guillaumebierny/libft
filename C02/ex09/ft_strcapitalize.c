/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:34:40 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/24 21:53:57 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	if (str[0] >= 'a' && str[1] <= 'z')
		str[0] -= 32;
	i = -1;
	while (str[++i])
	{
		if (!((str[i - 1] >= 97 && str[i - 1] <= 122)
				|| (str[i - 1] >= 48 && str[i - 1] <= 57)
				|| (str[i - 1] >= 65 && str[i - 1] <= 90)))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
	}
	return (str);
}