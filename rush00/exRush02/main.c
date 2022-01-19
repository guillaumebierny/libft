/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:06:02 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/13 16:58:16 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	func (int x,int y);
void	wr_l (char a,char b,int c);
int main()
{
	func (5, 3);
}

void	func (int x,int y)
{
	int f;
	int d;

	f = 0;
	d = 0;

	wr_l('A', 'B',1);
	f ++;
	while(0 < f < y - 2)
	{
		wr_l('B', ' ', 1);
		f ++;
	}
	wr_l('C', 'B', 0);
}


void	wr_l (char a,char b,int c, x)
{
	int p;

	p = 0;
	write (1, &a , 1);
	p ++;
	while (0 < p < x)
	{
		write (1, &b, 1);
		p ++;
	}
	write (1, &a, 1);
}
