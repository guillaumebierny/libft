/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:28:04 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/25 19:51:02 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	t;

	t = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (t < nb && src[t] && nb > 0)
	{
		dest[i++] = src[t];
		t++;
	}
	dest[i] = '\0';
	return (dest);
}
