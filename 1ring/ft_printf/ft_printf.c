/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:41:01 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:03:02 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	len;
	va_list	pa;

	len = 0;
	i = 0;
	va_start(pa, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_specifer(pa, *(format + i));
		}
		else
		{
			len += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(pa);
	return (len);
}
