/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:34:04 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/02 22:06:06 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	dest = (char *)malloc(sizeof(char) * str_len(src));
	if (!dest)
		return (NULL);
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
