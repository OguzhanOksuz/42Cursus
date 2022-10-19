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

void	ft_putptr(unsigned long long int ptr, int *len, int flag)
{
	char		*hex;
	
	hex = "0123456789abcdef";
	if (flag == 1)
	{
		write (1, "0x", 2);
		*len = *len + 2;
		flag = 0;
	}
	if (ptr == 0)
	{
		write(1, "0", 1);
		*len = *len + 1;
	}
	else if (ptr > 15)
	{
		ft_putptr(ptr / 16, len, flag);
		*len = *len + 1;
	}
	else
	{
		write(1, &hex[ptr % 16], 1);
		*len = *len + 1;
	}
}
