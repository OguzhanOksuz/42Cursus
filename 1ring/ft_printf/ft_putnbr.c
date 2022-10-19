/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:15:09 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:11:30 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	char	c;

	if (nbr == -2147483648)
		len += (write(1, "-2147483648", 11));
	else
	{
		if (nbr < 0)
		{
			len += write (1, "-", 1);
			nbr *= -1;
		}
		if (nbr > 9)
			ft_putnbr(nbr / 10, len);
		c = 48 + (nbr % 10);
		len += write(1, &c, 1);
	}
}
