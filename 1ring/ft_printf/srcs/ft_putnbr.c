/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:15:09 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/17 21:10:08 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	char	c;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len = *len + 11;
	}
	else if (nbr > -2147483648 && nbr <= 2147483647)
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			nbr *= -1;
		}
		if (nbr > 9)
			ft_putnbr(nbr / 10, len);
		c = 48 + (nbr % 10);
		write(1, &c, 1);
		*len = *len + 1;
	}
}
