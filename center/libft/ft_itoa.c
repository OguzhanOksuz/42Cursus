/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:51:13 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/16 23:51:04 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit(long int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		digit = 1;;
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

char	*ft_itoa(int nb)
{
	int		digit;
	int		i;
	char	*rt;
	long int	n = (long int)nb;

	i = 0;
	digit = ft_digit(n);
	rt = (char *)malloc(sizeof(char) * (digit + 1));
	if (!rt)
		return (0);
	rt[digit] = 0;
	if (n < 0)
	{
		rt[i++] = '-';
		n = -n;
	}
	while (i <= --digit)
	{
		rt[digit] = n % 10 + 48;
		n /= 10;
	}

	return (rt);
}
