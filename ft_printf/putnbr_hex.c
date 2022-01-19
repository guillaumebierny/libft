/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <gbierny@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:18:32 by gbierny           #+#    #+#             */
/*   Updated: 2022/01/19 13:10:59 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    putnbr_hex(unsigned int n, int *count, char c)
{
    char *base = "0123456789abcdef";
    char *base2 = "0123456789ABCDEF";
    
    if (n < 0)
        n *= -1;
    if (c == 'x')
    {
        if (n < 16)
        {
            ft_putchar_fd(base[n%16], 1);
            (*count)++;
        }
        else
        {
            putnbr_hex(n / 16, count, c);
            ft_putchar_fd(base[n%16], 1);
            (*count)++;
        }
    }
    else
         if (n < 16)
         {
            ft_putchar_fd(base2[n%16], 1);
            (*count)++;
         }
        else
        {
            putnbr_hex(n / 16, count, c);
            ft_putchar_fd(base2[n%16], 1);
            (*count)++;
        }
}

void    countnbr(int n, int *count)
{
    int nb;

    nb = n;
    if (!nb)
        (*count)++;
    if (nb < 0)
       (*count)++;
    while (nb != 0)
    {
        nb /= 10;
        (*count)++;
    }
    ft_putnbr_fd(n, 1);
}

static void	ft_putunsigned(unsigned int n, int fd)
{
	unsigned long int	nb;

	nb = (unsigned int) n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar_fd(nb % 10 + 48, fd);
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + 48, fd);
	}
}
void countunsigned(unsigned int n, int *count)
{
    unsigned int nb;

    nb = n;
    if (!nb)
        (*count)++;
    while (nb > 0)
    {
        nb /= 10;
        (*count)++;
    }
    ft_putunsigned(n, 1);  
}

void    putnbr_hexp(unsigned long int n, int *count)
{
    char *base = "0123456789abcdef";
    
    if (n < 16)
    {
        ft_putchar_fd(base[n%16], 1);
        (*count)++;
    }
    else
    {
        putnbr_hexp(n / 16, count);
        ft_putchar_fd(base[n%16], 1);
        (*count)++;
    }
}