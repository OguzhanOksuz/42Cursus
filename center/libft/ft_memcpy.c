/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ooksuz <ooksuz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:16:03 by Ooksuz            #+#    #+#             */
/*   Updated: 2022/10/05 16:59:49 by ooksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;


	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
