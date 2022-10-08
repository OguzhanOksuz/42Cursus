/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:12:55 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/08/14 01:25:49 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;

	i = 0;
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (rt == NULL)
		return (NULL);
	while (i < len && s[start])
		rt[i++] = s[start++];
	rt[i] = 0;
	return (rt);
}
