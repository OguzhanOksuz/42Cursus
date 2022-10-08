/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:06:50 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/14 15:12:07 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*rt;

	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	rt = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!rt)
		return (0);
	while (*s1)
		*rt++ = *s1++;
	while (*s2)
		*rt++ = *s2++;
	*rt = 0;
	return (rt);
}
