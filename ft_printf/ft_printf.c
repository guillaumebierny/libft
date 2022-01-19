/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <gbierny@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:51:27 by gbierny           #+#    #+#             */
/*   Updated: 2022/01/19 13:07:23 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int type_arg(va_list args, int *count, const char *s, int i)
{
            if (s[i] == 'd' || s[i] == 'i')
            {
                countnbr(va_arg(args, int), count);
            }
            if (s[i] == 'u')
                countunsigned(va_arg(args, unsigned int), count);
            if (s[i] == 'c')
            {
                ft_putchar_fd((char)va_arg(args, char *), 1);
                (*count)++;
            }
            if (s[i] == 's')
            {
                countchar(va_arg(args, char *), count);
            }
            if (s[i] == 'x' || s[i] == 'X')
            {
                putnbr_hex(va_arg(args, unsigned long), count, s[i]);
            }
            if (s[i] == 'p')
            {
                ft_putstr_fd("0x", 1);
                (*count) += 2;
                putnbr_hexp(va_arg(args, unsigned long int), count);
            }
            if (s[i] == '%')
            {
                ft_putchar_fd('%', 1);
                (*count)++;
            }
            if (s[i] == 0)
            {
                va_end(args);
                return (i) ;
            }
            i++;
            return (i);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int variable;
    int i = 0;
    int count;

    count = 0;
    if (!s)
        return (0);
    variable = 0;
    va_start(args, s);
    while (s[i])
    {   
        if (s[i] == '%')
        {
            type_arg(args, &count, s, ++i);
            i++;
        }
        else
        {
            count++;
            ft_putchar_fd(s[i], 1);
            i++;
        }
    }
    va_end(args);
    return (count);
}