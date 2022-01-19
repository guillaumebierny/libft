/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:00:11 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/30 16:38:00 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argv[--argc] > argv[0])
	{
		i = -1;
		while (argv[argc][++i])
		{
			write(1, &argv[argc][i], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
