/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:28:15 by gbierny           #+#    #+#             */
/*   Updated: 2021/12/01 19:14:30 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb > 1)
	{
		while (i-- > 1)
		{	
			nb *= i;
		}
		return (nb);
	}
	else if (nb >= 0)
		return (1);
	else
		return (0);
}
