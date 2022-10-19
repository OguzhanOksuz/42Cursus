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

void	ft_putnbruhex(unsigned int nbr, int *len, int flag)
{
	char	*hex;
	char	*heX;

	heX = "0123456789ABCDEF";
	hex = "0123456789abcdef";
	if (flag == 0)
	{
		if (nbr > 15)
			ft_putnbruhex(nbr / 16, len, flag);
		write(1, &hex[nbr % 16], 1);
		*len = *len + 1;
	}
	else if (flag == 1)
	{
		if (nbr > 15)
			ft_putnbruhex(nbr / 16, len, flag);
		write(1, &heX[nbr % 16], 1);
		*len = *len + 1;
	}
}
