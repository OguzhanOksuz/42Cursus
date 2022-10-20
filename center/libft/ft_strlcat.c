/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:22:44 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/20 22:37:50 by Ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = 0;
	if (dst)
		dlen = ft_strlen(dst);
	if (size <= dlen)
		dlen = size;
	else
	{
		while (src[i] && i < size - dlen - 1)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = 0;
	}
	return (dlen + ft_strlen(src));
}
