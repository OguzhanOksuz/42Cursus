/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:51:30 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:13:20 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_specifer(va_list pa, const char specifer, int *len)
{
	if (specifer == 'c')
		ft_putchr(va_arg(pa, int), len);
	else if (specifer == 's')
		ft_putstr(va_arg(pa, char *), len);
	else if (specifer == 'p')
		ft_putptr(va_arg(pa, unsigned long long int), len, 1);
	else if (specifer == 'd' || specifer == 'i')
		ft_putnbr(va_arg(pa, int), len);
	else if (specifer == 'u')
		ft_putnbru(va_arg(pa, unsigned int), len);
	else if (specifer == 'x')
		ft_putnbruhex(va_arg(pa, unsigned int), len, 0);
	else if (specifer == 'X')
		ft_putnbruhex(va_arg(pa, unsigned int), len, 1);
	else if (specifer == '%')
	{
		write(1, "%", 1);
		*len = *len + 1;
	}
}
