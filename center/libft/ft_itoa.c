/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:51:13 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/20 22:36:45 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit(long int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		digit = 1;
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int			digit;
	int			i;
	char		*rt;
	long int	nb;

	nb = (long int)n;
	i = 0;
	digit = ft_digit(nb);
	rt = (char *)malloc(sizeof(char) * (digit + 1));
	if (!rt)
		return (0);
	rt[digit] = 0;
	if (nb < 0)
	{
		rt[i++] = '-';
		nb = -nb;
	}
	while (i <= --digit)
	{
		rt[digit] = nb % 10 + 48;
		nb /= 10;
	}
	return (rt);
}
