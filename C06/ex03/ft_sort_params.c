/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:21:12 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/30 20:16:35 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	print_sorted_argc(char **argv);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	(void)argc;
	j = 0;
	while (argv[++j])
	{
		i = j;
		while (argv[++i])
		{
			if (ft_strcmp(argv[j], argv[i]) == 1)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
	}
	print_sorted_argc(argv);
}

void	print_sorted_argc(char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[++j])
	{
		i = -1;
		while (argv[j][++i])
		{
			write(1, &argv[j][i], 1);
		}
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
	}
	if (s2[i] != 0)
		return (-1);
	return (0);
}
