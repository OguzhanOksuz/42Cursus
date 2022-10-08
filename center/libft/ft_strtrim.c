/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:13:49 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/03 14:15:51 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_mbyte(const char *s1, char const *set)
{
	int	i;
	int	rt;
	int	j;

	rt = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		if (s1[i] == set[j])
		{
			while (s1[i + j] == set[j])
			{
				if (set[j + 1] == 0)
				{
					i = j + 1;
					break ;
				}
			}
		}
		i++;
		rt++;
	}
	return (rt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;
	int		j;
	int		k;

	tmp = (char *)malloc(ft_mbyte(s1, set) + 1);
	i = 0;
	j = 0;
	while (s1[j])
	{
		k = 0;
		if (s1[j] == set[k])
		{
			while (s1[j + k] == set[k])
			{
				if (set[k + 1] == 0)
				{
					j += k + 1;
					break ;
				}
			}
		}
		tmp[i++] = s1[j++];
	}
	return (tmp);
}
