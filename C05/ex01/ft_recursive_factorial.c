/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:16:21 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/01 19:16:06 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		nb *= ft_recursive__factorial(nb - 1);
		return (nb);
	}
	else if (nb >= 0)
		return (1);
	return (0);
}
