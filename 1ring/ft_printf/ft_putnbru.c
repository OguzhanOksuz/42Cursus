/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:20:14 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/19 10:08:17 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int nbr)
{
	char	c;
	int		len;

	len = 0;
	if (nbr > 9)
		len += ft_putnbru(nbr / 10);
	c = 48 + (nbr % 10);
	len += write(1, &c, 1);
	return (len);
}
