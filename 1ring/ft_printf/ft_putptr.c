/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:33:23 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:12:20 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long int ptr, int flag)
{
	char	*hex;
	int		len;
	
	hex = "0123456789abcdef";
	len = 0;
	if (flag == 1)
	{
		len += write (1, "0x", 2);
		flag = 0;
	}
	if (ptr > 15)
		len += ft_putptr(ptr / 16, flag);
	len += write(1, &hex[ptr % 16], 1);
	return (len);
}
