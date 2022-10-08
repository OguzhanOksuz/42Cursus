/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:23:09 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/03 14:13:51 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rt;
	int		i;

	i = 0;
	while (s[i])
		i++;
	rt = (char *)malloc(sizeof(char) * (i + 1));
	if (!rt)
		return (0);
	i = 0;
	while (*s)
		rt[i++] = *s++;
	return (rt);
}
