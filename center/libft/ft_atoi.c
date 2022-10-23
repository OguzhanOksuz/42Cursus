/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:52:16 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/20 22:33:16 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long unsigned int		num;
	int							np;

	num = 0;
	np = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		np = -1;
		str++;
	}
	else if (*str == '+')
	{
		np = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + *str - '0';
		str++;
	}
	return ((int)num * np);
}
