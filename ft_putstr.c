/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:53:48 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/04/13 18:53:52 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;

    if (str == NULL)
    {
		ft_putstr("(null)");
		return (6);
	}
    i = 0;
    while (str[i])
        ft_putchar(str[i++]);
    return (ft_strlen(str));
}