/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:48:31 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/05 19:58:07 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	if (dst == src)
		return (dst);
	if (strsrc < strdst)
	{
		while (len--)
			strdst[len] = strsrc[len];
	}
	else
		while (len--)
			*strdst++ = *strsrc++;
	return (dst);
}
