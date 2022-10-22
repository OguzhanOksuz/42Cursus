/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:25:49 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:12:03 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbruhex(unsigned int nbr, int flag)
{
	char	*hex;
	char	*heX;
	int		len;

	len = 0;
	heX = "0123456789ABCDEF";
	hex = "0123456789abcdef";
	if (flag == 0)
	{
		if (nbr > 15)
			len += ft_putnbruhex(nbr / 16, flag);
		len += write(1, &hex[nbr % 16], 1);
	}
	else if (flag == 1)
	{
		if (nbr > 15)
			len += ft_putnbruhex(nbr / 16, flag);
		len += write(1, &heX[nbr % 16], 1);
	}
	return (len);
}
