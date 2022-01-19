/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <gbierny@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:15:45 by gbierny           #+#    #+#             */
/*   Updated: 2022/01/19 16:08:15 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags initialize_flags(void)
{
    t_flags f;
    
    f.zero_flag = 0;
    f.dash_flag = 0;
    f.dot_flag = 0;
    f.diez_flag = 0;
    f.space_flag = 0;
    f.width_flag = 0;
    f.type = 0;

    return (f);
}


void check_flag(char *s)
{
    int i;

    i = 0;
    initialize_flags();
    while (!f.type && s[++i])
    {
        if (s[i] == '#')
            f->dash_flag = 1;
        if (s[i] == '0')
            f->zero_flag = 1;
        if (s[i] == '.')
            f->dot_flag = 1;
        if (s[i] == ' ')
            f->space_flag = 1;
        if (s[i] >= 48 && s[i] <= 57)
            f->width_flag

    }
}
