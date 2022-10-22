/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:51:30 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 11:04:08 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifer(va_list pa, const char specifer)
{
	if (specifer == 'c')
		return (ft_putchr(va_arg(pa, int)));
	else if (specifer == 's')
		return (ft_putstr(va_arg(pa, char *)));
	else if (specifer == 'p')
		return (ft_putptr(va_arg(pa, unsigned long long int), 1));
	else if (specifer == 'd' || specifer == 'i')
		return (ft_putnbr(va_arg(pa, int)));
	else if (specifer == 'u')
		return (ft_putnbru(va_arg(pa, unsigned int)));
	else if (specifer == 'x')
		return (ft_putnbruhex(va_arg(pa, unsigned int), 0));
	else if (specifer == 'X')
		return (ft_putnbruhex(va_arg(pa, unsigned int), 1));
	else if (specifer == '%')
		return (write(1, "%", 1));
	return (0);
}
