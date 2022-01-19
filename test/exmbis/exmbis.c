/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exmbis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:41:50 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/20 19:27:33 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ulstr(char **str);

int main(int argc, char **argv)
{
	unsigned int a;

	a = -1;
	while(argv[++a])
	{
	}
	if (a != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		ulstr(argv);
	}
}

void	 ulstr(char **str)
{
	int i;

	i = -1;
	while (str[1][++i])
	{
		if (str[1][i] >= 'a' && str[1][i] <= 'z')
		{
			str[1][i] -= 32;
		}
		else if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			str[1][i] +=32;
		write(1, &str[1][i], 1);
	}
	write(1, "\n", 1);

}
