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
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	if (dst == src)
		return (dst);
	if (strsrc < strdst)
	{
		while (n--)
			strdst[n] = strsrc[n];
	}
	else
		while (n--)
			*strdst++ = *strsrc++;
	return (dst);
}
