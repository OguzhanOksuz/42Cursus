/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:13:14 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/17 21:09:10 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(const char *str, int *len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
		*len = *len + 1;
	}
}
