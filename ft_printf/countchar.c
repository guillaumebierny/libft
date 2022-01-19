/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <gbierny@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:14:31 by gbierny           #+#    #+#             */
/*   Updated: 2022/01/19 12:04:34 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    countchar(char *variable, int *count)
{
    int i;

    if (!variable)
    {
        (*count) += 6;
        ft_putstr_fd("(null)", 1);
    }
    else
    {
        i = -1;
        while (variable[++i])
            (*count)++;
        ft_putstr_fd(variable, 1);
    }
}
