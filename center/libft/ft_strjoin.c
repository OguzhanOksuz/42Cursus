/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:06:50 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/20 22:46:26 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nullchecker(char const *s1, char const *s2)
{
	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (!s2 && s1)
		return (ft_strdup(s1));
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*rt;

	i = 0;
	if (!s1 || !s2)
		return (ft_nullchecker(s1, s2));
	rt = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!rt)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (i < len1)
	{
		rt[i] = s1[i];
		i++;
	}
	while (i < len2 + len1)
	{
		rt[i] = s2[i - len1];
		i++;
	}
	rt[len1 + len2] = 0;
	return (rt);
}
