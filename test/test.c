/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:13:51 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/16 10:28:24 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char f(char *dest,char *src);


int main()
{

	f(NULL,"bonjour");
}

char f(char *dest,char *src)
{
	int i =0;
	int t = 0;

	while(src[i])
	{
		write(1, &src[i], 1);
		i ++;
	}
	dest = malloc(i+1);

	while (src[t])
	{
		dest[t] = src[t];
		t ++;
	}
	i = 0;

	while(dest[i])
	{
		write(1, &dest[i], 1);
		i ++;
	}

	return * dest;
}
