/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:51:13 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/14 17:59:57 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_digit(int n)
{
	int	digit;

	digit = 0;
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
	int		digit;
	int		i;
	char	*rt;

	i = 0;
	digit = ft_digit(n);
	rt = (char *)malloc(sizeof(char) * (digit + 1));
	if (!rt)
		return (0);
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

int	main()
{
	printf("%s\n",ft_itoa(-623));
	printf("%s\n",ft_itoa(156));
	printf("%s\n",ft_itoa(0));
}
