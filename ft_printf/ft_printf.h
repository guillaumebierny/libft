/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <gbierny@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:11:09 by gbierny           #+#    #+#             */
/*   Updated: 2022/01/19 15:14:50 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

typedef struct flags
{
    int zero_flag;
    int dash_flag;
    int dot_flag;
    int diez_flag;
    int space_flag;
    int width_flag;
    int type;
} t_flags;

typedef struct g_list
{
    char *content;
    struct g_list *next;
}   g_list;

int ft_printf(const char *s, ...);
void    putnbr_hex(unsigned int n, int *count, char c);
void    countchar(char *variable, int *count);
void    countnbr(int n, int *count);
void countunsigned(unsigned int n, int *count);
void    putnbr_hexp(unsigned long int n, int *count);
t_flags initialize_flags(void);

#endif 