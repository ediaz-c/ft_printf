/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:25:33 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/04/06 18:27:38 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/*
*               MAX             MIN
*   int     |   INT_MAX     |   INT_MIN
*   
*
*/
//ft_printf_utils.c
int ft_strlen(char *str);
int ft_nbr_digits(int nb);

// SRC
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int nb);
int ft_putptr_hex(unsigned long long nb);
int ft_put_un_nbr(unsigned int nb);
int ft_put_hex(unsigned int nb, char format);
int ft_printf(const char *str, ...);

#endif